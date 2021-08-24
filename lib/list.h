#ifndef LIST
#define LIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct element element;
typedef struct list_element list_element;

struct element
{
 list_element *childrens;
 int aux;
 int info;
 int id;
 char *type;
};

struct list_element
{
 element *value;
 list_element *next;
};

#endif