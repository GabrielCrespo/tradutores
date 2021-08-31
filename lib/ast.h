#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tree_element tree_element;

struct tree_element
{
 char rule[100];
 char type[100];
 char value[100];
 tree_element *next_left;
 tree_element *next_right;
};

tree_element *create_element(char*, char*, char*, tree_element*, tree_element*);
void show_tree_element(char*);
void show_tree(tree_element*, int);
void free_tree(tree_element*);
void show_ident(int);