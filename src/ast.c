#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/ast.h"

tree_element *create_element(rules rule, char *type, char *value,  tree_element *next_left, tree_element *next_right)
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
  // if (strcmp(element_type, "CONDITIONAL_STATEMENT") == 0)
  //   printf("CONDITIONAL_STATEMENT");
  // if (strcmp(element_type, "ITERATION_STATEMENT") == 0)
  //   printf("ITERATION_STATEMENT");
  // if (strcmp(element_type, "EXPRESSION_STATEMENT") == 0)
  //   printf("EXPRESSION_STATEMENT");
  // if (strcmp(element_type, "RETURN_STATEMENT") == 0)
  //   printf("RETURN_STATEMENT");
  // if (strcmp(element_type, "EXPRESSION") == 0)
  //   printf("EXPRESSION");
  // if (strcmp(element_type, "ASSIGN_EXPRESSION") == 0)
  //   printf("ASSIGN_EXPRESSION");
  // if (strcmp(element_type, "SIMPLE_EXPRESSION") == 0)
  //   printf("SIMPLE_EXPRESSION");
  // if (strcmp(element_type, "RELATIONAL_EXPRESSION") == 0)
  //   printf("RELATIONAL_EXPRESSION");
  // if (strcmp(element_type, "ITERATION_STATEMENT") == 0)
  //   printf("ITERATION_STATEMENT");
  // if (strcmp(element_type, "ARITHMETIC_ADD_EXPRESSION") == 0)
  //   printf("ARITHMETIC_ADD_EXPRESSION");
  // if (strcmp(element_type, "ARITHMETIC_MUL_EXPRESSION") == 0)
  //   printf("ARITHMETIC_MUL_EXPRESSION");
  // if (strcmp(element_type, "UNARY_SUB_EXPRESSION") == 0)
  //   printf("UNARY_SUB_EXPRESSION");
  // if (strcmp(element_type, "FACTOR") == 0)
  //   printf("FACTOR");
  // if (strcmp(element_type, "RELATIONAL_OP") == 0)
  //   printf("RELATIONAL_OP");
  // if (strcmp(element_type, "ARITHMETIC_ADD_OP") == 0)
  //   printf("ARITHMETIC_ADD_OP");
  // if (strcmp(element_type, "ARITHMETIC_MULT_OP") == 0)
  //   printf("ARITHMETIC_MULT_OP");
  // if (strcmp(element_type, "BINARY_LOGIC_OP") == 0)
  //   printf("BINARY_LOGIC_OP");
  // if (strcmp(element_type, "LIST_EXPRESSION") == 0)
  //   printf("LIST_EXPRESSION");
  // if (strcmp(element_type, "HEADER") == 0)
  //   printf("HEADER");
  // if (strcmp(element_type, "TAIL") == 0)
  //   printf("TAIL");
  // if (strcmp(element_type, "MAP") == 0)
  //   printf("MAP");
  // if (strcmp(element_type, "FILTER") == 0)
  //   printf("FILTER");
  // if (strcmp(element_type, "LIST_COMPARATION") == 0)
  //   printf("LIST_COMPARATION");
  // if (strcmp(element_type, "IN_OUT_EXPRESSION") == 0)
  //   printf("IN_OUT_EXPRESSION");
  // if (strcmp(element_type, "READ") == 0)
  //   printf("READ");
  // if (strcmp(element_type, "WRITE") == 0)
  //   printf("WRITE");
  // if (strcmp(element_type, "FUNCTION_CALL") == 0)
  //   printf("FUNCTION_CALL");
  // if (strcmp(element_type, "ARGUMENTS") == 0)
  //   printf("ARGUMENTS");
  // if (strcmp(element_type, "LIST_ARGUMENTS") == 0)
  //   printf("LIST_ARGUMENTS");
  // if (strcmp(element_type, "VAR") == 0)
  //   printf("VAR");

  printf(" | ");
}

void show_ident(int num_tabs)
{
 for(int i = num_tabs; i != 0; i--)
  {
    printf(" | ");
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
      printf("| type element: %s | ", tree->type);
    }

    if (tree->value != NULL)
    {
      printf("| value element: %s | ", tree->value);
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