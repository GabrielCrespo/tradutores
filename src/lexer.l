%option noyywrap
%option yylineno
%option noinput
%option nounput

%{

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	int lineno = 1;
	int column = 1;

	void print_token(char *token_type);
	// void yyerror();

%}

%x IN_COMMENT

letter 											[a-zA-Z]
digit 											[0-9]
alphanumeric 									{letter}|{digit}
print											[ -~]
identifier										{letter}+({alphanumeric}|_)*
integer											"0"|[0-9]{digit}*
float											{digit}*"."{digit}+
char											(\'{print}\')|(\'\\[nftrbv]\')
string											\"{print}*\"

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

"int"|"float"|"elem"|"set"|"EMPTY"		{ print_token("TYPE"); column+=strlen(yytext); }

"if"									{ print_token("IF"); column+=strlen(yytext); }
"else"									{ print_token("ELSE"); column+=strlen(yytext); }
"else if"								{ print_token("ELSE-IF"); column+=strlen(yytext); }
"for"									{ print_token("FOR"); column+=strlen(yytext); }
"return" 								{ print_token("RETURN"); column+=strlen(yytext); }

"read"									{ print_token("READ"); column+=strlen(yytext); }
"write"									{ print_token("WRITE"); column+=strlen(yytext); }
"writeln"								{ print_token("WRITELN"); column+=strlen(yytext); }

"+"										{ print_token("SUM_OP"); column+=strlen(yytext); }
"-"										{ print_token("SUB_OP"); column+=strlen(yytext); }
"*"										{ print_token("MULT_OP"); column+=strlen(yytext); }
"/"										{ print_token("DIV_OP"); column+=strlen(yytext);}

"in"									{ print_token("IN_OP"); column+=strlen(yytext); }
"is_set"								{ print_token("IS_SET_OP"); column+=strlen(yytext); }
"add"									{ print_token("ADD_OP"); column+=strlen(yytext); }
"remove"								{ print_token("REMOVE_OP"); column+=strlen(yytext); }
"exists"								{ print_token("EXISTS_OP"); column+=strlen(yytext); }
"forall"								{ print_token("FORALL_OP"); column+=strlen(yytext); }

"||"									{ print_token("OR_OP"); column+=strlen(yytext); }
"&&"									{ print_token("AND_OP"); column+=strlen(yytext); }
"!"										{ print_token("NOT_OP"); column+=strlen(yytext); }

"=="									{ print_token("EQUAL_OP"); column+=strlen(yytext); }
"!="									{ print_token("DIFF_OP"); column+=strlen(yytext); }

">"|"<"|">="|"<="						{ print_token("REL_OP"); column+=strlen(yytext); }

"="										{ print_token("ASSIGN_OP"); column+=strlen(yytext); }	


"("      								{ print_token("L_PAREN"); column+=strlen(yytext); }
")"      								{ print_token("R_PAREN"); column+=strlen(yytext); }
"]"      								{ print_token("L_BRACK"); column+=strlen(yytext); }
"["      								{ print_token("R_BRACK"); column+=strlen(yytext); }
"{"      								{ print_token("L_BRACE"); column+=strlen(yytext); }
"}"      								{ print_token("R_BRACE"); column+=strlen(yytext); }
";"      								{ print_token("SEMI"); column+=strlen(yytext); }
"."      								{ print_token("DOT"); column+=strlen(yytext); }
","      								{ print_token("COMMA"); column+=strlen(yytext); }
"&"      								{ print_token("REFER"); column+=strlen(yytext); }

{identifier}        					{ print_token("ID"); column+=strlen(yytext); }
{integer}     							{ print_token("INT_LIT"); column+=strlen(yytext); }
{float}     							{ print_token("FLOAT_LIT"); column+=strlen(yytext); }
{string}								{ print_token("STRING_LIT"); column+=strlen(yytext); }
{char}									{ print_token("CHAR_LIT"); column+=strlen(yytext); }


"\n"									{ lineno += 1; column=1; }

[ \t]+									{ column+=strlen(yytext); }

.										{ printf("ERROR! At line: %d, column: %d. Unrecognized character: %s\n", lineno, column, yytext); }

%%

void print_token(char *token_type){
   fprintf(stderr, "At line: %d\t Token: < %s, %s >\n", lineno, yytext, token_type);
}

int main(int argc, char *argv[]){
   yyin = fopen(argv[1], "r");
   yylex();
   fclose(yyin);
   yylex_destroy();
   return 0;
}