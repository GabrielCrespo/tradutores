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
%token <element> EXC_OP
%token <name> OR_OP
%token <name> AND_OP
%token <name> EQUAL_OP
%token <name> DIFF_OP
%token <name> LST_OP
%token <name> GRT_OP
%token <name> LST_EQ_OP
%token <name> GRT_EQ_OP
%token <name> ASSIGN_OP
%token <name> L_PAREN
%token <name> R_PAREN
%token <name> L_BRACK
%token <name> R_BRACK
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
//%type <element> function_simple_declaration
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
  type_specifier ID L_PAREN parameters R_PAREN compound_statement {
    $$ = create_element(FUNCTION_DECLARATION, $1->type, $2, NULL, $4);
    $4->next_left = $6;
    insert_symbol(table, $2, $1->type, "function", lineno);
} | 
  type_specifier LIST ID L_PAREN parameters R_PAREN compound_statement {
    $$ = create_element(FUNCTION_DECLARATION, $2, $3, NULL, $5);
    $5->next_left = $7;
    insert_symbol(table, $3, $2, "function", lineno);
} | 
  type_specifier ID L_PAREN R_PAREN compound_statement {
    $$ = create_element(FUNCTION_DECLARATION, $1->type, $2, NULL, NULL);
    insert_symbol(table, $3, $1->type, "function", lineno);
} | 
  type_specifier LIST ID L_PAREN R_PAREN compound_statement {
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

type_specifier: INT {
  $$ = create_element(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
} | FLOAT {
  $$ = create_element(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
};

compound_statement: 
 L_BRACK
    {
     present_scope+=1;
    }
      local_declarations R_BRACK {
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

statement: expression_statement {
  $$ = $1;
} | compound_statement {
  $$ = $1;
} | conditional_statement {
  $$ = $1;
} | iteration_statement {
  $$ = $1;
} | return_statement {
  $$ = $1;
} | variable_declaration {
  $$ = $1;
} | list_declaration {
  $$ = $1;
} | in_out_expression {
  $$ = $1;
};

conditional_statement: IF L_PAREN expression R_PAREN statement {
  $$ = create_element(CONDITIONAL_STATEMENT, NULL, NULL, NULL, $3);
  $3->next_left = $5;
} | IF L_PAREN expression R_PAREN statement ELSE statement {
  $$ = create_element(CONDITIONAL_STATEMENT, NULL, NULL, NULL, $3);
  $3->next_left = $5;
  $5->next_left = $7;
};

iteration_statement: FOR L_PAREN expression_statement expression_statement expression R_PAREN statement {
  $$ = create_element(ITERATION_STATEMENT, NULL, NULL, NULL, $3);
  $3->next_left = $4;
  $4->next_left = $5;
  $5->next_left = $7;
};

expression_statement: expression SEMI {
  $$ = $1;
} | SEMI {
  $$ = NULL;
};

return_statement: RETURN expression SEMI {
  $$ = create_element(RETURN_STATEMENT, NULL, NULL, NULL, $2);
} | RETURN SEMI {
  $$ = create_element(RETURN_STATEMENT, NULL, NULL, NULL, NULL);
};

expression: assign_expression {
  $$ = $1;
} | simple_expression {
  $$ = $1;
} | list_expression {
  $$ = $1;
} | in_out_expression {
  $$ = $1;
};

assign_expression: ID ASSIGN_OP expression {
  $$ = create_element(ASSIGN_EXPRESSION, NULL, $2, NULL, $3);
} | ID ASSIGN_OP NIL {
  $$ = create_element(ASSIGN_EXPRESSION, NULL, $2, NULL, NULL);
};

simple_expression: EXC_OP relational_expression {
  $$ = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
  $1->next_left = $2;
} | simple_expression binary_logic_op relational_expression {
  $$ = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
  $1->next_left = $2;
  $2->next_left = $3;
} | simple_expression binary_logic_op EXC_OP relational_expression {
  $$ = create_element(SIMPLE_EXPRESSION, NULL, NULL, NULL, $1);
  $1->next_left = $2;
  $2->next_left = $3;
  $4->next_left = $4;
} | relational_expression {
  $$ = $1;
};

relational_expression: relational_expression relational_op arithmetic_add_expression {
  $$ = create_element(RELATIONAL_EXPRESSION, NULL, NULL, NULL, $1);
  $1->next_left = $2;
  $2->next_left = $3;
} | arithmetic_add_expression {
  $$ = $1;
};

arithmetic_add_expression: arithmetic_add_expression arithmetic_add_op arithmetic_mul_expression {
  $$ = create_element(ARITHMETIC_ADD_EXPRESSION, NULL, NULL, NULL, $1);
  $1->next_left = $2;
  $2->next_left = $3;
} | arithmetic_mul_expression {
  $$ = $1;
};

arithmetic_mul_expression: arithmetic_mul_expression arithmetic_mult_op unary_sub_expression {
  $$ = create_element(ARITHMETIC_MUL_EXPRESSION, NULL, NULL, NULL, $1);
  $1->next_left = $2;
  $2->next_left = $3;
} | unary_sub_expression {
  $$ = $1;
};

unary_sub_expression: SUB_OP factor {
  $$ = $2;
  $$ = create_element(UNARY_SUB_EXPRESSION, NULL, $1, NULL, $2);
} | factor {
  $$ = $1;
};

factor: L_PAREN expression R_PAREN {
  $$ = $2;
}| function_call{
  $$ = $1;
} | ID {
  $$ = create_element(FACTOR, NULL, $1, NULL, NULL);
} | INT_CONST {
  $$ = create_element(FACTOR, NULL, $1, NULL, NULL);
} | FLOAT_CONST {
  $$ = create_element(FACTOR, NULL, $1, NULL, NULL);
};

relational_op: LST_OP {
  $$ = create_element(RELATIONAL_OP, NULL, $1, NULL, NULL);
} | LST_EQ_OP {
  $$ = create_element(RELATIONAL_OP, NULL, $1, NULL, NULL);
} | GRT_OP {
  $$ = create_element(RELATIONAL_OP, NULL, $1, NULL, NULL);
} | GRT_EQ_OP {
  $$ = create_element(RELATIONAL_OP, NULL, $1, NULL, NULL);
} | EQUAL_OP {
  $$ = create_element(RELATIONAL_OP, NULL, $1, NULL, NULL);
} | DIFF_OP {
  $$ = create_element(RELATIONAL_OP, NULL, $1, NULL, NULL);
};

arithmetic_add_op: SUM_OP {
  $$ = create_element(ARITHMETIC_ADD_OP, NULL, $1, NULL, NULL);
} | SUB_OP {
  $$ = create_element(ARITHMETIC_ADD_OP, NULL, $1, NULL, NULL);
};

arithmetic_mult_op: MULT_OP {
  $$ = create_element(ARITHMETIC_MULT_OP, NULL, $1, NULL, NULL);
} | DIV_OP {
  $$ = create_element(ARITHMETIC_MULT_OP, NULL, $1, NULL, NULL);
};

binary_logic_op: OR_OP {
  $$ = create_element(BINARY_LOGIC_OP, NULL, $1, NULL, NULL);
} | AND_OP {
  $$ = create_element(BINARY_LOGIC_OP, NULL, $1, NULL, NULL);
};

list_expression: constructor {
  $$ = $1;
} | header {
  $$ = $1;
} | tail {
  $$ = $1;
} | map{
  $$ = $1;
} | filter {
  $$ = $1;
} | list_comparation {
  $$ = $1;
};

constructor: expression LIST_CONSTRUCTOR ID {
  $$ = create_element(CONSTRUCTOR, $2, $3, NULL, $1);
};

header: LIST_HEADER ID {
  $$ = create_element(HEADER, $2, $1, NULL, NULL);
};

tail: LIST_TAIL ID {
  $$ = create_element(TAIL, $2, $1, NULL, NULL);
};

map: ID LIST_MAP ID {
  $$ = create_element(MAP, $2, $1, NULL, NULL);
};

filter: ID LIST_FILTER ID {
  $$ = create_element(FILTER, $2, $1, NULL, NULL);
};

list_comparation: ID EQUAL_OP NIL {
  $$ = create_element(LIST_COMPARATION, $2, $1, NULL, NULL);
} | ID DIFF_OP NIL {
  $$ = create_element(LIST_COMPARATION, $2, $1, NULL, NULL);
};

in_out_expression: read SEMI {
  $$ = $1;
} | write SEMI {
  $$ = $1;
};

read: READ L_PAREN ID R_PAREN {
  $$ = create_element(READ_EXP, NULL, NULL, NULL, NULL);
};

write: WRITE L_PAREN var R_PAREN {
  $$ = create_element(WRITE_EXP, NULL, NULL, NULL, $3);
} | WRITELN L_PAREN var R_PAREN {
  $$ = create_element(WRITE_EXP, NULL, NULL, NULL, $3);
};

function_call: ID L_PAREN arguments R_PAREN {

} | ID L_PAREN R_PAREN {
  $$ = create_element(FUNCTION_CALL, $2, $1, NULL, NULL);
};

arguments: list_arguments {
 $$ = $1;
};

list_arguments: list_arguments COMMA expression {
  $$ = create_element(FUNCTION_CALL, NULL, NULL, NULL, $1);
  $1 -> next_left = $3;
} | expression {
  $$ = $1;
};

var: STRING {
  $$ = create_element(VAR, NULL, $1, NULL, NULL);
} | CHAR {
  $$ = create_element(VAR, NULL, $1, NULL, NULL);
} | list_expression {
  $$ = $1;
} | simple_expression {
  $$ = $1;
};

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