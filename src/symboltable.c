#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/symboltable.h"

symbol_table *create_symbol_table()
{
 symbol_table *table = (symbol_table *)malloc(sizeof(symbol_table));
 if (!table)
 {
  return NULL;
 }
 table->head = NULL;
 return table;
}

symbol *create_symbol(char *identifier, char *scope, char *type, char *symbol_type, int line)
{
 symbol *new_symbol = (symbol *)malloc(sizeof(symbol));
 if (!new_symbol)
 {
  return NULL;
 }
 new_symbol->identifier = identifier;
 new_symbol->scope = scope;
 new_symbol->type = type;
 new_symbol->symbol_type = symbol_type;
 new_symbol->line = line;
 new_symbol->next = NULL;

 return new_symbol;
}

void insert_symbol(symbol_table *table, char *identifier, char *scope, char *type, char *symbol_type, int line)
{
 symbol *current_symbol = NULL;
 if (table->head == NULL)
 {
  table->head = create_symbol(identifier, scope, type, symbol_type, line);
 }
 else
 {
  current_symbol = table->head;
  while (current_symbol->next != NULL)
  {
   current_symbol = current_symbol->next;
  }
  current_symbol->next = create_symbol(identifier, scope, type, symbol_type, line);
 }
}

void show_symbol_table(symbol_table *table)
{
 symbol *current_symbol = table->head;

 if (table->head == NULL)
 {
  return;
 }
 printf("\n|=================================SYMBOL TABLE===================================|\n");
 for (; current_symbol != NULL; current_symbol = current_symbol->next)
 {
  printf("| identifier: %5s | scope: %5s | type %5s | symbol type: %5s | line: %5d |\n", current_symbol->identifier, current_symbol->scope, current_symbol->type, current_symbol->symbol_type, current_symbol->line);
 }
}

void free_symbol_table(symbol_table *table)
{
 symbol *current_symbol = table->head;
 symbol *next = current_symbol;

 while (current_symbol != NULL)
 {
  next = current_symbol->next;
  free(current_symbol);
  current_symbol = next;
 }
 free(table);
}