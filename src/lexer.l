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

 int lineno = 1;
 int column = 0;

 void print_token(char *token_type);
 void error_handler(char *token, int line, int column);
 void print_color(char *color);

%}

/* Rules Section */
%x IN_COMMENT

letter            [a-zA-Z]
digit             [0-9]
alphanumeric      {letter}|{digit}
identifier        {letter}+({alphanumeric}|_)*
integer           [-]?{digit}*
float             [-]?[0-9]*(\.[0-9]+)
char              (\'(.|\\a|\\b|\\f|\\n|\\r|\\t|\\v|\\\\|\\\'|\\\"|\\\?)\')
string            \"[^\"]*\"|'[^']*'

%%

"//".*

<INITIAL>{
 "/*"	BEGIN(IN_COMMENT);
}

<IN_COMMENT>{
 "*/"	BEGIN(INITIAL);
 [^*\n]+
 "*"
 \n		lineno++;
}    

"main"                  { print_token("MAIN"); column+=strlen(yytext); }

"int"|"float"|"list"    { print_token("TYPE"); column+=strlen(yytext); }

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

">"|"<"|">="|"<="       { print_token("REL_OP"); column+=strlen(yytext); }

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
{integer}               { print_token("INT_LIT"); column+=strlen(yytext); }
{float}                 { print_token("FLOAT_LIT"); column+=strlen(yytext); }
{string}                { print_token("STRING_LIT"); column+=strlen(yytext); }
{char}                  { print_token("CHAR_LIT"); column+=strlen(yytext); }


"\n"                    { lineno += 1; column=1; }

[ \t]+                  { column+=strlen(yytext); }

.                       { column+=strlen(yytext); error_handler(yytext, lineno, column); }

%%

void print_token(char *token_type){
 fprintf(stderr, "At line: %d\t Token: < %s, %s >\n", lineno, yytext, token_type);
}

void print_color(char *color){
 printf("%s", color);
}

void error_handler(char *token, int line, int column) {
 printf("ERROR! The character %s is not defined (line: %d, column: %d)\n", token, line, column);
}

int main(int argc, char *argv[]){;

   yyin = fopen(argv[1], "r");
   yylex();
   fclose(yyin);
   yylex_destroy();
   return 0;
}