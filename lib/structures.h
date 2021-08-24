#ifndef STRUCTURES
#define STRUCTURES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

typedef struct symbol symbol;
typedef struct symbol_list symbol_list;
typedef struct token token;

char *get_token(char *);
char *allocate_memory(char *);

struct symbol
{
 char token[20];
 char lexema[34];
 char *type;

 int id;
 int line;
 int column;
 int scope;
 int aux;
 int function;
 int limit;

 stack *parameters;
 stack *values;

 symbol *next;
};

struct symbol_list
{
 symbol *first;
};

struct token
{
 int line;
 int column;
 int scope;

 char *lexema;
};

#endif