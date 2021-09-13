%debug
%locations
%define parse.error verbose
%define lr.type canonical-lr

%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "lib/symboltable.h"
 #include "lib/ast.h"

 extern int yylex();
 extern int yylex_destroy();

 extern FILE *yyin;

 extern void yyerror(const char *tt_name);

 extern int lineno;
 extern int column;
 int present_scope = 0;

 symbol_table* table = NULL;
 tree_element* tree = NULL;

%}

%union token {
  char* name;
  struct tree_element* element;
}

%token <name> INT
%token <name> FLOAT
%token <name> LIST
%token <name> NIL
%token <name> IF
%token <name> ELSE
%token <name> FOR
%token <name> RETURN
%token <name> READ
%token <name> WRITE
%token <name> WRITELN
%token <name> SUM_OP
%token <name> SUB_OP
%token <name> MULT_OP
%token <name> DIV_OP
%token <name> LIST_HEADER
%token <name> LIST_CONSTRUCTOR
%token <name> LIST_TAIL
%token <name> LIST_MAP
%token <name> LIST_FILTER
%token <name> EXC_OP
%token <name> OR_OP
%token <name> AND_OP
%token <name> EQUAL_OP
%token <name> DIFF_OP
%token <name> LST_OP
%token <name> GRT_OP
%token <name> LST_EQ_OP
%token <name> GRT_EQ_OP
%token <name> ASSIGN_OP
%token <name> '('
%token <name> ')'
%token <name> '{'
%token <name> '}'
%token <name> SEMI
%token <name> COMMA
%token <name> REFFER
%token <name> ID
%token <name> INT_CONST
%token <name> FLOAT_CONST
%token <name> STRING
%token <name> CHAR 


%type <element> program
%type <element> declarations
%type <element> declaration
%type <element> variable_declaration
%type <element> list_declaration
%type <element> function_declaration
%type <element> type_specifier
%type <element> parameters
%type <element> list_paremeters
%type <element> parameter
%type <element> variable_simple_declaration
%type <element> list_simple_declaration
%type <element> function_simple_declaration
%type <element> compound_statement
%type <element> local_declarations
%type <element> list_statements
%type <element> statement
%type <element> conditional_statement
%type <element> iteration_statement
%type <element> expression_statement
%type <element> return_statement
%type <element> expression
%type <element> assign_expression
%type <element> simple_expression
%type <element> relational_expression
%type <element> arithmetic_add_expression
%type <element> arithmetic_mul_expression
%type <element> unary_sub_expression
%type <element> factor
%type <element> relational_op
%type <element> arithmetic_add_op
%type <element> arithmetic_mult_op
%type <element> binary_logic_op
%type <element> list_expression
%type <element> constructor
%type <element> header
%type <element> tail
%type <element> map
%type <element> filter
%type <element> list_comparation
%type <element> in_out_expression
%type <element> read
%type <element> write
%type <element> function_call
%type <element> arguments
%type <element> list_arguments
%type <element> var

%%

program: declarations {
 $$ = create_element(PROGRAM, NULL, NULL, NULL, $1);
 tree = $$;
};
 
declarations: declarations declaration {
  $$ = create_element(DECLARATIONS, NULL, NULL, NULL, $1);
  $1->next_left = $2;

} | declaration {
  $$ = $1;
};
 
declaration: variable_declaration {
  $$ = $1;
} | list_declaration {
  $$ = $1;
} | function_declaration {
  $$ = $1;
} | error {
  yyerrok;
  $$ = NULL;
};
 
variable_declaration: variable_simple_declaration SEMI {
  $$ = $1;
};
 
list_declaration: list_simple_declaration SEMI {
  $$ = $1;
};

function_declaration: 
  type_specifier ID '(' parameters ')' compound_statement {
    $$ = create_element(FUNCTION_DECLARATION, $1->type, $2, NULL, $4);
    $4->next_left = $6;
    insert_symbol(table, $2, $1->type, "function", lineno);
} | 
  type_specifier LIST ID '(' parameters ')' compound_statement {
    $$ = create_element(FUNCTION_DECLARATION, $2, $3, NULL, $5);
    $5->next_left = $7;
    insert_symbol(table, $3, $2, "function", lineno);
} | 
  type_specifier ID '(' ')' compound_statement {
    $$ = create_element(FUNCTION_DECLARATION, $1->type, $2, NULL, NULL);
    insert_symbol(table, $3, $1->type, "function", lineno);
} | 
  type_specifier LIST ID '(' ')' compound_statement {
   $$ = create_element(FUNCTION_DECLARATION, $2, $3, NULL, NULL);
   insert_symbol(table, $3, $2, "function", lineno);
};

parameters: list_paremeters {
  $$ = $1;
};

list_paremeters: list_paremeters COMMA parameter {
  $$ = create_element(LIST_PARAMETERS, NULL, NULL, NULL, $1);
  $1->next_right = $3;
} | parameter {
  $$ = $1;
};

parameter: variable_simple_declaration {
  $$ = $1;
} | list_simple_declaration {
  $$ = $1;
};

variable_simple_declaration: type_specifier ID {
  $$ = create_element(VARIABLE_SIMPLE_DECLARATION, $1->type, $2, NULL, NULL);
  insert_symbol(table, $2, $1->type, "variable", lineno);
};

list_simple_declaration: type_specifier LIST ID {
  $$ = create_element(LIST_SIMPLE_DECLARATION, $2, $3, NULL, NULL);
  insert_symbol(table, $3, $2, "variable", lineno);
};

function_simple_declaration: type_specifier ID {
  $$ = create_element(FUNCTION_SIMPLE_DECLARATION, $1->type, $2, NULL, NULL);
  insert_symbol(table, $2, $1->type, "function", lineno);
} | type_specifier LIST ID {
  $$ = create_element(FUNCTION_SIMPLE_DECLARATION, $2, $3, NULL, NULL);
  insert_symbol(table, $3, $2, "function", lineno);
};

type_specifier: INT {
  $$ = create_element(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
} | FLOAT {
  $$ = create_element(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
};

compound_statement: 
 '{' 
    { 
     present_scope+=1;
    }
      local_declarations '}' {
       $$ = create_element(COMPOUND_STATEMENT, NULL, NULL, NULL, $3);
       present_scope--;
      };

local_declarations: list_statements {
 $$ = $1;
};

list_statements: list_statements statement {
 $$ = create_element(LIST_STATEMENTS, NULL, NULL, NULL, $1);
 $1->next_left = $2; 
} | statement {
 $$ = $1;
};

statement: expression_statement | compound_statement | conditional_statement | iteration_statement | return_statement | variable_declaration | list_declaration | in_out_expression;

conditional_statement: IF '(' expression ')' statement | IF '(' expression ')' statement ELSE statement;

iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement;

expression_statement: expression SEMI | SEMI;

return_statement: RETURN expression SEMI | RETURN SEMI;

expression: assign_expression | simple_expression | list_expression | in_out_expression;

assign_expression: ID ASSIGN_OP expression | ID ASSIGN_OP NIL;

simple_expression: EXC_OP relational_expression | simple_expression binary_logic_op relational_expression | simple_expression binary_logic_op EXC_OP relational_expression | relational_expression;

relational_expression: relational_expression relational_op arithmetic_add_expression | arithmetic_add_expression;

arithmetic_add_expression: arithmetic_add_expression arithmetic_add_op arithmetic_mul_expression | arithmetic_mul_expression;

arithmetic_mul_expression: arithmetic_mul_expression arithmetic_mult_op unary_sub_expression | unary_sub_expression;

unary_sub_expression: SUB_OP factor | factor;

factor: '(' expression ')' | function_call | ID | INT_CONST | FLOAT_CONST;

relational_op: LST_OP | LST_EQ_OP | GRT_OP | GRT_EQ_OP | EQUAL_OP | DIFF_OP;

arithmetic_add_op: SUM_OP | SUB_OP;

arithmetic_mult_op: MULT_OP | DIV_OP;

binary_logic_op: OR_OP | AND_OP;

list_expression: constructor | header | tail | map | filter | list_comparation;

constructor: expression LIST_CONSTRUCTOR ID;

header: LIST_HEADER ID;

tail: LIST_TAIL ID;

map: ID LIST_MAP ID;

filter: ID LIST_FILTER ID;

list_comparation: ID EQUAL_OP NIL | ID DIFF_OP NIL;

in_out_expression: read SEMI | write SEMI;

read: READ '(' ID ')';

write: WRITE '(' var ')' | WRITELN '(' var ')';

function_call: ID '(' arguments ')' | ID '(' ')';

arguments: list_arguments;

list_arguments: list_arguments COMMA expression | expression;

var: STRING | CHAR | list_expression | simple_expression;

%%

extern void yyerror(const char *tt_name) {
  //printf("\nyyerror: %s em linha: %d coluna: %d.\n", tt_name, yylval.lex.lineno, yylval.lex.column);
}

int main(int argc, char *argv[]){

  // #ifdef YYDEBUG
  //   yydebug = 1;
  // #endif

  yyin = fopen(argv[1], "r");

  table = create_symbol_table();

  yyparse();
  fclose(yyin);
  yylex_destroy();


  printf("\n\n\n==================ABSTRACT TREE==================\n\n");
  show_tree(tree, 0);

  show_symbol_table(table);

  free_tree(tree);
  free_symbol_table(table);

  return 0;
}