/*Flex will read one and only one input file*/
%option noyywrap
%option yylineno
%option noinput
%option nounput

/* Block of code */
%{

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "sintatic.tab.h"

 extern char* yytext;  
 extern int yylex();

/* Variables that control the line and column values of a token */
 int lineno = 1, column = 1;

//  void print_token(char *token_type);
 void error_handler(char *token, int line, int column);

%}

/* Rules Section */
%x MULTI_LINE_COMMENT 

letter            [a-zA-Z]
digit             [0-9]
alphanumeric      {letter}|{digit}
identifier        {letter}+({alphanumeric}|_)*
integer           {digit}*
float             [0-9]*(\.[0-9]*)
char              (\'(.|\\a|\\b|\\f|\\n|\\r|\\t|\\v|\\\\|\\\'|\\\"|\\\?)\')
string            \"[^\"]*\"

%%


 /* Comments Handle Section */
"//".*

<INITIAL>"/*" {
   BEGIN(MULTI_LINE_COMMENT);
}

<MULTI_LINE_COMMENT>"*/" {
   BEGIN(INITIAL);
}

<MULTI_LINE_COMMENT>[^*\n]+

<MULTI_LINE_COMMENT>"*"

<MULTI_LINE_COMMENT>\n {
   lineno++;
}

"int"                   { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return INT; }
"float"                 { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return FLOAT; }
"list"                  { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return LIST; }

"NIL"                   { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return NIL; }

"if"                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return IF; }
"else"                  { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return ELSE; }
"for"                   { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return FOR; }
"return"                { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return RETURN; }

"read"                  { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return READ; }
"write"                 { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return WRITE; }
"writeln"               { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return WRITELN; }

"+"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return SUM_OP; }
"-"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return SUB_OP; }
"*"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return MULT_OP; }
"/"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return DIV_OP; }

"?"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return LIST_HEADER; }
":"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return LIST_CONSTRUCTOR; }
"%"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return LIST_TAIL; }
">>"                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return LIST_MAP; }
"<<"                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return LIST_FILTER; }

"!"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return EXC_OP; }

"||"                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return OR_OP; }
"&&"                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return AND_OP; }

"=="                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return EQUAL_OP; }
"!="                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return DIFF_OP; }

">"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return LST_OP; }
"<"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return GRT_OP; }
"<="                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return LST_EQ_OP; }
">="                    { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return GRT_EQ_OP; }

"="                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return ASSIGN_OP; }	

"("                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return 40 + '0';  }
")"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return 41 + '0'; }
"{"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return 123 + '0'; }
"}"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return 125 + '0'; }
";"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return SEMI; }
","                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return COMMA; }
"&"                     { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return REFFER; }

{identifier}            { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return ID; }
{integer}               { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return INT_CONST; }
{float}                 { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return FLOAT_CONST; }
{string}                { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return STRING; }
{char}                  { strcpy(yylval.name, yytext); yylval.lineno = lineno; yylval.column = column; column+=strlen(yytext); return CHAR;}


"\n"                    { lineno += 1; column=1; }

[ \t]+                  { column+=strlen(yytext); }

.                       { column+=strlen(yytext); error_handler(yytext, lineno, column); }

%%

/* Function that will print the found token and its type */
// void print_token(char *token_type){
//  fprintf(stderr, "At line: %d\t Token: < %s, %s >\n", lineno, yytext, token_type);
// }

/* Function that will criticize a not defined found token */
void error_handler(char *token, int line, int column) {
 printf("ERROR! The character %s is not defined (line: %d, column: %d)\n", token, line, column);
}

// int main(int argc, char *argv[]){;

//    yyin = fopen(argv[1], "r");
//    yylex();
//    fclose(yyin);
//    yylex_destroy();
//    return 0;
// }