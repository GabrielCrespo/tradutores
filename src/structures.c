#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/structures.h"

char *get_token(char *s)
{
  if (strcmp(s, "int") == 0)
    return "int";
  if (strcmp(s, "float") == 0)
    return "float";
  if (strcmp(s, "list") == 0)
    return "list";
  if (strcmp(s, "NIL") == 0)
    return "null constant";

  if (strcmp(s, "if") == 0)
    return "if";
  if (strcmp(s, "else") == 0)
    return "else";
  if (strcmp(s, "for") == 0)
    return "for";
  if (strcmp(s, "return") == 0)
    return "return";

  if (strcmp(s, "read") == 0)
    return "read";
  if (strcmp(s, "write") == 0)
    return "write";
  if (strcmp(s, "writeln") == 0)
    return "writeln";

  if (strcmp(s, "+") == 0)
    return "add";
  if (strcmp(s, "-") == 0)
    return "subtraction";
  if (strcmp(s, "*") == 0)
    return "multiplication";
  if (strcmp(s, "/") == 0)
    return "division";

  if (strcmp(s, "?") == 0)
    return "list header";
  if (strcmp(s, ":") == 0)
    return "list constructor";
  if (strcmp(s, "%%") == 0)
    return "list tail";
  if (strcmp(s, ">>") == 0)
    return "list map";
  if (strcmp(s, "<<") == 0)
    return "list filter";

  if (strcmp(s, "||") == 0)
    return "or";
  if (strcmp(s, "&&") == 0)
    return "and";
  if (strcmp(s, "==") == 0)
    return "equal";
  if (strcmp(s, "!=") == 0)
    return "difference";
  if (strcmp(s, "=") == 0)
    return "assignment";

  if (strcmp(s, "(") == 0)
    return "left parentheses";
  if (strcmp(s, ")") == 0)
    return "right parentheses";
  if (strcmp(s, "[") == 0)
    return "left brackets";
  if (strcmp(s, "[") == 0)
    return "right brackets";
  if (strcmp(s, "{") == 0)
    return "left brace";
  if (strcmp(s, "}") == 0)
    return "right brackets";
  if (strcmp(s, ";") == 0)
    return "semi colon";
  if (strcmp(s, ",") == 0)
    return "comma";
  if (strcmp(s, "&") == 0)
    return "reference";
    
  return "identifier";
}

char *allocate_memory(char *s)
{
  char *aux_string = (char *)realloc(s, 3000 * sizeof(char));

  if (aux_string != NULL)
  {
    s = aux_string;
  }
  else
  {
    free(s);
    printf("ERROR!! Memory not allocated!!\n");
    EXIT_FAILURE;
  }
  return s;
}