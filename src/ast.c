#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/ast.h"

tree_element *create_element(char *rule, char *type, char *value, tree_element *next_element, tree_element *child_element)
{
 tree_element *element = (tree_element *)malloc(sizeof(tree_element));

 strcpy(element->rule, rule);
 strcpy(element->type, type);
 strcpy(element->value, value);
 element->next_element = next_element;
 element->child_element = child_element;

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
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "VARIABLE_DECLARATION") == 0)
  printf("VARIABLE_DECLARATION");
 if (strcmp(element_type, "LIST_DECLARATION") == 0)
  printf("VARIABLE_DECLARATION");
 if (strcmp(element_type, "FUNCTION_DECLARATION") == 0)
  printf("FUNCTION_DECLARATION");
 if (strcmp(element_type, "VARIABLE_SIMPLE_DECLARATION") == 0)
  printf("VARIABLE_SIMPLE_DECLARATION");
 if (strcmp(element_type, "LIST_SIMPLE_DECLARATION") == 0)
  printf("LIST_SIMPLE_DECLARATION");
 if (strcmp(element_type, "FUNCTION_SIMPLE_DECLARATION") == 0)
  printf("FUNCTION_SIMPLE_DECLARATION");
 if (strcmp(element_type, "TYPE_SPECIFIER") == 0)
  printf("TYPE_SPECIFIER");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
 if (strcmp(element_type, "DECLARATION") == 0)
  printf("DECLARATION");
}

void show_tree(tree_element *tree, int d)
{
 if (tree)
 {
  while (d != 0)
  {
   printf(" | ");
   d--;
  }
 }

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
  show_tree(tree->next_element, d);
  show_tree(tree->child_element, d + 1);
 }

void free_tree(tree_element* element) {
  
  if(element == NULL) return;
  if(element->next_element) free(element->next_element);
  if(element->child_element) free(element->child_element);

  free(element);
}