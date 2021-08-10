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
 
 /* Variables that control the line and column values of a token */
 int lineno = 1, column = 1;
 /* Variables that control the line and column values of a comment */
 int begin_comment_line = 0, begin_comment_column = 0;

 void print_token(char *token_type);
 void error_handler(char *token, int line, int column);
 void unclosed_comment_error_handler(int line, int column);

%}

/* Rules Section */
%x ML_COMMENT 

letter            [a-zA-Z]
digit             [0-9]
alphanumeric      {letter}|{digit}
identifier        {letter}+({alphanumeric}|_)*
integer           [-]?{digit}*
float             [-]?[0-9]*(\.[0-9]+)
char              (\'(.|\\a|\\b|\\f|\\n|\\r|\\t|\\v|\\\\|\\\'|\\\"|\\\?)\')
string            \"[^\"]*\"|'[^']*'

%%


 /* Comments Handle Section */
"//".*

<INITIAL>"/*" {
   BEGIN(ML_COMMENT);
   begin_comment_line = lineno;
   begin_comment_column = column;
}

<ML_COMMENT>"*/" {
   BEGIN(INITIAL);
}

<ML_COMMENT>[^*\n]+

<ML_COMMENT>"*"

<ML_COMMENT>\n {
   lineno++;
}

<ML_COMMENT><<EOF>> { 
   unclosed_comment_error_handler(begin_comment_line, begin_comment_column);
   yyterminate();
}

"main"                  { print_token("MAIN"); column+=strlen(yytext); }

"int"                   { print_token("INT_TYPE"); column+=strlen(yytext); }
"float"                 { print_token("FLOAT_TYPE"); column+=strlen(yytext); }
"list"                  { print_token("LIST_TYPE"); column+=strlen(yytext); }

"NIL"                   { print_token("CONST_NIL"); column+=strlen(yytext); }

"if"                    { print_token("IF"); column+=strlen(yytext); }
"else"                  { print_token("ELSE"); column+=strlen(yytext); }
"for"                   { print_token("FOR"); column+=strlen(yytext); }
"return"                { print_token("RETURN"); column+=strlen(yytext); }

"read"                  { print_token("READ"); column+=strlen(yytext); }
"write"                 { print_token("WRITE"); column+=strlen(yytext); }
"writeln"               { print_token("WRITELN"); column+=strlen(yytext); }

"+"                     { print_token("SUM_OP"); column+=strlen(yytext); }
"-"                     { print_token("SUB_OP"); column+=strlen(yytext); }
"*"                     { print_token("MULT_OP"); column+=strlen(yytext); }
"/"                     { print_token("DIV_OP"); column+=strlen(yytext);}

"?"                     { print_token("LIST_HEADER"); column+=strlen(yytext); }
":"                     { print_token("LIST_CONSTRUCTOR"); column+=strlen(yytext); }
"%"                     { print_token("LIST_TAIL"); column+=strlen(yytext); }
">>"                    { print_token("LIST_MAP"); column+=strlen(yytext); }
"<<"                    { print_token("LIST_FILTER"); column+=strlen(yytext); }

"!"                     { print_token("EXC_OP"); column+=strlen(yytext); }

"||"                    { print_token("OR_OP"); column+=strlen(yytext); }
"&&"                    { print_token("AND_OP"); column+=strlen(yytext); }

"=="                    { print_token("EQUAL_OP"); column+=strlen(yytext); }
"!="                    { print_token("DIFF_OP"); column+=strlen(yytext); }

">"                     { print_token("LST_OP"); column+=strlen(yytext); }
"<"                     { print_token("GRT_OP"); column+=strlen(yytext); }
"<="                    { print_token("LST_EQ_OP"); column+=strlen(yytext); }
">="                    { print_token("GRT_EQ_OP"); column+=strlen(yytext); }

"="                     { print_token("ASSIGN_OP"); column+=strlen(yytext); }	

"("                     { print_token("L_PAREN"); column+=strlen(yytext); }
")"                     { print_token("R_PAREN"); column+=strlen(yytext); }
"]"                     { print_token("L_BRACK"); column+=strlen(yytext); }
"["                     { print_token("R_BRACK"); column+=strlen(yytext); }
"{"                     { print_token("L_BRACE"); column+=strlen(yytext); }
"}"                     { print_token("R_BRACE"); column+=strlen(yytext); }
";"                     { print_token("SEMI"); column+=strlen(yytext); }
"."                     { print_token("DOT"); column+=strlen(yytext); }
","                     { print_token("COMMA"); column+=strlen(yytext); }
"&"                     { print_token("REFER"); column+=strlen(yytext); }

{identifier}            { print_token("ID"); column+=strlen(yytext); }
{integer}               { print_token("INT_CONST"); column+=strlen(yytext); }
{float}                 { print_token("FLOAT_CONST"); column+=strlen(yytext); }
{string}                { print_token("STRING"); column+=strlen(yytext); }
{char}                  { print_token("CHAR"); column+=strlen(yytext); }


"\n"                    { lineno += 1; column=1; }

[ \t]+                  { column+=strlen(yytext); }

.                       { column+=strlen(yytext); error_handler(yytext, lineno, column); }

%%

/* Function that will print the found token and its type */
void print_token(char *token_type){
 fprintf(stderr, "At line: %d\t Token: < %s, %s >\n", lineno, yytext, token_type);
}

/* Function that will criticize a not defined found token */
void error_handler(char *token, int line, int column) {
 printf("ERROR! The character %s is not defined (line: %d, column: %d)\n", token, line, column);
}

/* Function that will criticize unclosed tokens */
void unclosed_comment_error_handler(int line, int column) {
   printf("Alerta! Foi detectado um comentário de múltiplas linhas aberto mas não fechado (line: %d, column: %d)\n", line, column);
}

int main(int argc, char *argv[]){;

   yyin = fopen(argv[1], "r");
   yylex();
   fclose(yyin);
   yylex_destroy();
   return 0;
}