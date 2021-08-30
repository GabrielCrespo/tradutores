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

 extern int lineno; 
 extern int column;

 int present_scope = 0;
 char result[30];

 symbol_table* table = NULL;

%}

%union token {
 char name[100];
 char tipo[100];
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
%token <name> L_PAREN
%token <name> R_PAREN
%token <name> L_BRACE
%token <name> R_BRACE
%token <name> SEMI
%token <name> COMMA
%token <name> REFFER
%token <name> ID
%token <name> INT_CONST
%token <name> FLOAT_CONST
%token <name> STRING
%token <name> CHAR 


%type <name> variable_simple_declaration
%type <name> list_simple_declaration
%type <name> function_declaration
%type <name> function_simple_declaration
%type <name> type_specifier
%type <name> variable_declaration
%type <name> list_declaration

%%
program: declarations;
 
declarations: declarations declaration | declaration | error;
 
declaration: variable_declaration | list_declaration | function_declaration;
 
variable_declaration: variable_simple_declaration SEMI {
   //$$ = $1;
};
 
list_declaration: list_simple_declaration SEMI {
  //$$ = $1;
};

function_declaration: function_simple_declaration L_PAREN parameters R_PAREN compound_statement | function_simple_declaration L_PAREN R_PAREN compound_statement;

type_specifier: INT | FLOAT;

parameters: list_paremeters;

list_paremeters: list_paremeters COMMA parameter | parameter;

parameter: variable_simple_declaration | %empty;

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

compound_statement: L_BRACE list_statements R_BRACE;

list_statements: list_statements statement | statement;

statement: compound_statement | conditional_statement | iteration_statement | expression_statement | return_statement | in_out_statement | variable_declaration;

conditional_statement: IF L_PAREN simple_expression R_PAREN statement | IF L_PAREN simple_expression R_PAREN statement ELSE statement;

iteration_statement: FOR L_PAREN assign_expression SEMI simple_expression SEMI assign_expression R_PAREN statement;

expression_statement: expression SEMI;

return_statement: RETURN expression SEMI | RETURN SEMI;

in_out_statement: read SEMI | write SEMI;

read: READ L_PAREN ID R_PAREN;

write: WRITE L_PAREN var R_PAREN | WRITELN L_PAREN var R_PAREN;

expression: assign_expression | simple_expression | list_expression | const_expression;

assign_expression: ID ASSIGN_OP expression SEMI;

simple_expression: unary_logic_operation | binary_logic_operation;

binary_logic_operation: binary_logic_operation binary_logic_op unary_logic_operation | unary_logic_operation ;

unary_logic_operation: EXC_OP unary_logic_operation | relational_expression;

relational_expression: relational_expression relational_op arithmetic_add_expression | arithmetic_add_expression;

arithmetic_add_expression: arithmetic_add_expression arithmetic_add_op arithmetic_mul_expression | arithmetic_mul_expression;

arithmetic_mul_expression: arithmetic_mul_expression arithmetic_mult_op unary_sub_expression | unary_sub_expression;

unary_sub_expression: arithmetic_add_expression factor | factor;

factor: L_PAREN simple_expression R_PAREN | function_call | ID | const_expression;

relational_op: LST_OP | LST_EQ_OP | GRT_OP | GRT_EQ_OP | EQUAL_OP | DIFF_OP;

arithmetic_add_op: SUM_OP | SUB_OP;

arithmetic_mult_op: MULT_OP | DIV_OP;

binary_logic_op: OR_OP | AND_OP;

list_expression: constructor | header | tail | map | filter;

constructor: expression LIST_CONSTRUCTOR ID;

header: LIST_HEADER ID;

tail: tail ID;

map: function_call LIST_MAP ID;

filter: function_call LIST_FILTER ID;

tail: LIST_TAIL | EXC_OP;

const_expression: INT_CONST | FLOAT_CONST | NIL;

function_call: ID L_PAREN arguments R_PAREN | ID L_PAREN R_PAREN;

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