#ifndef SYMBOL_TABLE
#define SYMBOL_TABLE

typedef struct symbol_table symbol_table;
typedef struct symbol symbol;

struct symbol_table
{
 symbol *head;
};

struct symbol
{
 char identifier[50];
 int scope;
 char type[50];
 char symbol_type[50];
 int line;

 symbol *next;
};

symbol_table *create_symbol_table();
symbol *create_symbol(char*, char*, int, char*, int);
void insert_symbol(symbol_table*, char*, char*, char*, int);
void show_symbol_table(symbol_table*);
void free_symbol_table(symbol_table*);

#endif