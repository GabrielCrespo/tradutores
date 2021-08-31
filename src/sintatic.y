%debug
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

 int present_scope = 0;

 symbol_table* table;
 tree_element* tree;

%}

%union token {
 char name[100];
 int lineno, column;
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
%type <element> variable_simple_declarations
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
program: declarations;
 
declarations: declarations declaration | declaration;
 
declaration: variable_declaration | list_declaration | function_declaration | error;
 
variable_declaration: variable_simple_declaration SEMI {
   //$$ = $1;
};
 
list_declaration: list_simple_declaration SEMI {
  //$$ = $1;
};

function_declaration: function_simple_declaration '(' parameters ')' compound_statement | function_simple_declaration '(' ')' compound_statement;

type_specifier: INT | FLOAT;

parameters: list_paremeters;

list_paremeters: list_paremeters COMMA parameter | parameter;

parameter: variable_simple_declaration | list_simple_declaration;

variable_simple_declaration: type_specifier ID {
  insert_symbol(table, $2, $1, "variable", lineno);
};

list_simple_declaration: type_specifier LIST ID {
  insert_symbol(table, $3, $2, "variable", lineno);
};

function_simple_declaration: type_specifier ID {
  insert_symbol(table, $2, $1, "function", lineno);
} | type_specifier LIST ID {
  insert_symbol(table, $3, $2, "function", lineno);
};

compound_statement: '{' local_declarations '}';

local_declarations: list_statements;

list_statements: list_statements statement | statement;

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
  printf("yyerror: %s em linha: %d coluna: %d.\n", tt_name, lineno, column);
}

int main(int argc, char *argv[]){
  yyin = fopen(argv[1], "r");

  table = create_symbol_table();

  yyparse();
  fclose(yyin);
  yylex_destroy();

  show_symbol_table(table);
  free_symbol_table(table);

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

  // printf("\n\n\n________________| ABSTRACT TREE |________________\n\n");
  // print_tree(abstract_tree, 0);
  // print_symbol_table();

  // free_ast(abstract_tree);
  // free_symbol_table();

  return 0;
}