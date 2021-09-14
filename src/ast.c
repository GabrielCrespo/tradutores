#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/ast.h"

tree_element *create_element(rules rule, char *type, char *value, tree_element *next_left, tree_element *next_right)
{
  tree_element *element = (tree_element *) malloc(sizeof(tree_element));

  if (!element)
  {
    return NULL;
  }
  
  element->rule = rule;
  element->type = type;
  element->value = value;
  // element->type = strdup(type);
  // element->value = strdup(value); 
  element->next_left = next_left;
  element->next_right = next_right;
  

  return element;
}

void show_tree_element(int type)
{
  if (type == PROGRAM)
    printf("PROGRAM");
  if (type == DECLARATIONS)
    printf("DECLARATIONS");
  if (type == DECLARATION)
    printf("DECLARATION");
  if (type == VARIABLE_DECLARATION)
    printf("VARIABLE_DECLARATION");
  if (type == LIST_DECLARATION)
    printf("LIST_DECLARATION");
  if (type == FUNCTION_DECLARATION)
    printf("FUNCTION_DECLARATION");
  if (type == TYPE_SPECIFIER)
    printf("TYPE_SPECIFIER");
  if (type == PARAMETERS)
    printf("PARAMETERS");
  if (type == LIST_PARAMETERS)
    printf("LIST_PARAMETERS");
  if (type == PARAMETER)
    printf("PARAMETER");
  if (type == VARIABLE_SIMPLE_DECLARATION)
    printf("VARIABLE_SIMPLE_DECLARATION");
  if (type == LIST_SIMPLE_DECLARATION)
    printf("LIST_SIMPLE_DECLARATION");
  if (type == FUNCTION_SIMPLE_DECLARATION)
    printf("FUNCTION_SIMPLE_DECLARATION");
  if (type == COMPOUND_STATEMENT)
    printf("COMPOUND_STATEMENT");
  if (type == LOCAL_DECLARATIONS)
    printf("LOCAL_DECLARATIONS");
  if (type == LIST_STATEMENTS)
    printf("LIST_STATEMENTS");
  if (type == STATEMENT)
    printf("STATEMENT");
  if (type == CONDITIONAL_STATEMENT)
    printf("CONDITIONAL_STATEMENT");
  if (type == ITERATION_STATEMENT)
    printf("ITERATION_STATEMENT");
  if (type == EXPRESSION_STATEMENT)
    printf("EXPRESSION_STATEMENT");
  if (type == RETURN_STATEMENT)
    printf("RETURN_STATEMENT");
  if (type == EXPRESSION)
    printf("EXPRESSION");
  if (type == ASSIGN_EXPRESSION)
    printf("ASSIGN_EXPRESSION");
  if (type == SIMPLE_EXPRESSION)
    printf("SIMPLE_EXPRESSION");
  if (type == RELATIONAL_EXPRESSION)
    printf("RELATIONAL_EXPRESSION");
  if (type == IN_OUT_EXPRESSION)
    printf("IN_OUT_EXPRESSION");
  if (type == ARITHMETIC_ADD_EXPRESSION)
    printf("ARITHMETIC_ADD_EXPRESSION");
  if (type == ARITHMETIC_MUL_EXPRESSION)
    printf("ARITHMETIC_MUL_EXPRESSION");
  if (type == UNARY_SUB_EXPRESSION)
    printf("UNARY_SUB_EXPRESSION");
  if (type == FACTOR)
    printf("FACTOR");
  if (type == RELATIONAL_OP)
    printf("RELATIONAL_OP");
  if (type == ARITHMETIC_ADD_OP)
    printf("ARITHMETIC_ADD_OP");
  if (type == ARITHMETIC_MULT_OP)
    printf("ARITHMETIC_MULT_OP");
  if (type == BINARY_LOGIC_OP)
    printf("BINARY_LOGIC_OP");
  if (type == LIST_EXPRESSION)
    printf("LIST_EXPRESSION");
  if (type == CONSTRUCTOR)
    printf("LIST_EXPRESSION");
  if (type == HEADER)
    printf("HEADER");
  if (type == TAIL)
    printf("TAIL");
  if (type == MAP)
    printf("MAP");
  if (type == FILTER)
    printf("FILTER");
  if (type == LIST_COMPARATION)
    printf("LIST_COMPARATION");
  if (type == IN_OUT_EXP)
    printf("IN_OUT_EXPRESSION");
  if (type == READ_EXP)
    printf("READ");
  if (type == WRITE_EXP)
    printf("WRITE");
  if (type == FUNCTION_CALL)
    printf("FUNCTION_CALL");
  if (type == ARGUMENTS)
    printf("ARGUMENTS");
  if (type == LIST_ARGUMENTS)
    printf("LIST_ARGUMENTS");
  if (type == VAR)
    printf("VAR");

  printf(" | ");
}

void show_ident(int num_tabs)
{
 for(int i = num_tabs; i != 0; i--)
  {
    printf(" * ");
  }
}

void show_tree(tree_element *tree, int d)
{

  if (tree)
  {

    show_ident(d);
    show_tree_element(tree->rule);

    if (tree->type != NULL)
    {
      printf("type element: %s | ", tree->type);
    }

    if (tree->value != NULL)
    {
      printf("value element: %s | ", tree->value);
    }

    printf("\n");
    show_tree(tree->next_left, d);
    show_tree(tree->next_right, d+1);

  }
}

void free_tree(tree_element *element)
{
  if(element == NULL) return;
  if(element->next_left) free_tree(element->next_left);
  if(element->next_right) free_tree(element->next_right);
  free(element);
}