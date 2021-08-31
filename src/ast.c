#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/ast.h"

tree_element *create_element(char *rule, char *type, char *value, tree_element *next_right, tree_element *next_left)
{
  tree_element *element = (tree_element *)malloc(sizeof(tree_element));

  if (element != NULL)
  {
    strcpy(element->rule, rule);
    strcpy(element->type, type);
    strcpy(element->value, value);
    element->next_right = next_right;
    element->next_left = next_left;
  }

  return element;
}

void show_tree_element(char *element_type)
{
  if (strcmp(element_type, "PROGRAM") == 0)
    printf("PROGRAM");
  if (strcmp(element_type, "DECLARATIONS") == 0)
    printf("DECLARATIONS");
  if (strcmp(element_type, "DECLARATION") == 0)
    printf("DECLARATION");
  if (strcmp(element_type, "VARIABLE_DECLARATION") == 0)
    printf("VARIABLE_DECLARATION");
  if (strcmp(element_type, "LIST_DECLARATION") == 0)
    printf("VARIABLE_DECLARATION");
  if (strcmp(element_type, "FUNCTION_DECLARATION") == 0)
    printf("FUNCTION_DECLARATION");
  if (strcmp(element_type, "TYPE_SPECIFIER") == 0)
    printf("TYPE_SPECIFIER");
  if (strcmp(element_type, "PARAMETERS") == 0)
    printf("PARAMETERS");
  if (strcmp(element_type, "LIST_PARAMETERS") == 0)
    printf("LIST_PARAMETERS");
  if (strcmp(element_type, "PARAMETER") == 0)
    printf("PARAMETER");
  if (strcmp(element_type, "VARIABLE_SIMPLE_DECLARATION") == 0)
    printf("VARIABLE_SIMPLE_DECLARATION");
  if (strcmp(element_type, "LIST_SIMPLE_DECLARATION") == 0)
    printf("LIST_SIMPLE_DECLARATION");
  if (strcmp(element_type, "FUNCTION_SIMPLE_DECLARATION") == 0)
    printf("FUNCTION_SIMPLE_DECLARATION");
  if (strcmp(element_type, "COMPOUND_STATEMENT") == 0)
    printf("COMPOUND_STATEMENT");
  if (strcmp(element_type, "LOCAL_DECLARATIONS") == 0)
    printf("LOCAL_DECLARATIONS");
  if (strcmp(element_type, "LIST_STATEMENTS") == 0)
    printf("LIST_STATEMENTS");
  if (strcmp(element_type, "STATEMENT") == 0)
    printf("STATEMENT");
  if (strcmp(element_type, "CONDITIONAL_STATEMENT") == 0)
    printf("CONDITIONAL_STATEMENT");
  if (strcmp(element_type, "ITERATION_STATEMENT") == 0)
    printf("ITERATION_STATEMENT");
  if (strcmp(element_type, "EXPRESSION_STATEMENT") == 0)
    printf("EXPRESSION_STATEMENT");
  if (strcmp(element_type, "RETURN_STATEMENT") == 0)
    printf("RETURN_STATEMENT");
  if (strcmp(element_type, "EXPRESSION") == 0)
    printf("EXPRESSION");
  if (strcmp(element_type, "ASSIGN_EXPRESSION") == 0)
    printf("ASSIGN_EXPRESSION");
  if (strcmp(element_type, "SIMPLE_EXPRESSION") == 0)
    printf("SIMPLE_EXPRESSION");
  if (strcmp(element_type, "RELATIONAL_EXPRESSION") == 0)
    printf("RELATIONAL_EXPRESSION");
  if (strcmp(element_type, "ITERATION_STATEMENT") == 0)
    printf("ITERATION_STATEMENT");
  if (strcmp(element_type, "ARITHMETIC_ADD_EXPRESSION") == 0)
    printf("ARITHMETIC_ADD_EXPRESSION");
  if (strcmp(element_type, "ARITHMETIC_MUL_EXPRESSION") == 0)
    printf("ARITHMETIC_MUL_EXPRESSION");
  if (strcmp(element_type, "UNARY_SUB_EXPRESSION") == 0)
    printf("UNARY_SUB_EXPRESSION");
  if (strcmp(element_type, "FACTOR") == 0)
    printf("FACTOR");
  if (strcmp(element_type, "RELATIONAL_OP") == 0)
    printf("RELATIONAL_OP");
  if (strcmp(element_type, "ARITHMETIC_ADD_OP") == 0)
    printf("ARITHMETIC_ADD_OP");
  if (strcmp(element_type, "ARITHMETIC_MULT_OP") == 0)
    printf("ARITHMETIC_MULT_OP");
  if (strcmp(element_type, "BINARY_LOGIC_OP") == 0)
    printf("BINARY_LOGIC_OP");
  if (strcmp(element_type, "LIST_EXPRESSION") == 0)
    printf("LIST_EXPRESSION");
  if (strcmp(element_type, "HEADER") == 0)
    printf("HEADER");
  if (strcmp(element_type, "TAIL") == 0)
    printf("TAIL");
  if (strcmp(element_type, "MAP") == 0)
    printf("MAP");
  if (strcmp(element_type, "FILTER") == 0)
    printf("FILTER");
  if (strcmp(element_type, "LIST_COMPARATION") == 0)
    printf("LIST_COMPARATION");
  if (strcmp(element_type, "IN_OUT_EXPRESSION") == 0)
    printf("IN_OUT_EXPRESSION");
  if (strcmp(element_type, "READ") == 0)
    printf("READ");
  if (strcmp(element_type, "WRITE") == 0)
    printf("WRITE");
  if (strcmp(element_type, "FUNCTION_CALL") == 0)
    printf("FUNCTION_CALL");
  if (strcmp(element_type, "ARGUMENTS") == 0)
    printf("ARGUMENTS");
  if (strcmp(element_type, "LIST_ARGUMENTS") == 0)
    printf("LIST_ARGUMENTS");
  if (strcmp(element_type, "VAR") == 0)
    printf("VAR");

  printf(" ");
}

void show_ident(int num_tabs)
{
  while (num_tabs != 0)
  {
    printf("\t");
    num_tabs--;
  }
}

void show_tree(tree_element *tree, int d)
{

  if (tree == NULL)
  {
    show_ident(d);
    printf("--<EMPTY TREE>--");
    return;
  }

  show_ident(d);
  show_tree_element(tree->rule);

  if (tree->type != NULL)
  {
    printf("| type element: %5s | ", tree->type);
  }

  if (tree->value != NULL)
  {
    printf("| type element: %5s | ", tree->value);
  }

  printf("\n");
  show_tree(tree->next_right, d + 1);
  show_tree(tree->next_left, d + 1);
}

void free_tree(tree_element *element)
{

  if (element)
  {
    free_tree(element->next_left);
    free_tree(element->next_right);
    free(element);
  }

  return;
}