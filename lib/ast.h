#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tree_element tree_element;
typedef enum rules rules;

enum rules
{
 PROGRAM,
 DECLARATIONS,
 DECLARATION,
 VARIABLE_DECLARATION,
 LIST_DECLARATION,
 FUNCTION_DECLARATION,
 TYPE_SPECIFIER,
 PARAMETERS,
 LIST_PARAMETERS,
 PARAMETER,
 VARIABLE_SIMPLE_DECLARATION,
 LIST_SIMPLE_DECLARATION,
 FUNCTION_SIMPLE_DECLARATION,
 COMPOUND_STATEMENT,
 LOCAL_DECLARATIONS,
 LIST_STATEMENTS,
 STATEMENT
};

struct tree_element
{
 rules rule;
 char *type;
 char *value;
 // char type[100];
 // char value[100];
 tree_element *next_left;
 tree_element *next_right;
};

tree_element *create_element(rules, char *, char *, tree_element *, tree_element *);
void show_tree_element(int);
void show_tree(tree_element *, int);
void free_tree(tree_element *);
void show_ident(int);