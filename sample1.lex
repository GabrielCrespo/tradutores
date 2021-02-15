%option noyywrap
%option yylineno

%{

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	int lineno = 1;

	void print_token(char *token_type);
	// void yyerror();

%}

%x IN_COMMENT

letter 											[a-zA-Z]
digit 											[0-9]
alphanumeric 									{letter}|{digit}
print											[ -~]
identifier										{letter}+{alphanumeric}*
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

"int"|"float"|"elem"|"set"|"EMPTY"           	{ print_token("TYPE"); }
"if"|"else"|"for"|"return" 						{ print_token("KEYWORD"); }

"+"|"-"|"*"|"/"									{ print_token("ARITHOP"); }
"||"|"&&"|"!"									{ print_token("LOGICOP"); }
"=="|"!="										{ print_token("EQUALSOP"); }
">"|"<"|">="|"<="								{ print_token("RELOP"); }
"="												{ print_token("ASSIGN"); }


"("      										{ print_token("LPAREN"); }
")"      										{ print_token("RPAREN"); }
"]"      										{ print_token("LBRACK"); }
"["      										{ print_token("RBRACK"); }
"{"      										{ print_token("LBRACE"); }
"}"      										{ print_token("RBRACE"); }
";"      										{ print_token("SEMI"); }
"."      										{ print_token("DOT"); }
","      										{ print_token("COMMA"); }
"&"      										{ print_token("REFER"); }

{identifier}        							{ print_token("ID"); }
{integer}     									{ print_token("INTLIT"); }
{float}     									{ print_token("FLOATLIT"); }
{string}										{ print_token("STRINGLIT"); }
{char}											{ print_token("CHARLIT"); }


"\n"											{ lineno += 1; }

[ \t]+	

.												{ printf("ERROR!!\t\tat line: %d\tUnrecognized character: %s\n", lineno, yytext); }

%%

void print_token(char *token_type){
   printf("symbol: %s\ttoken: %s\tat line: %d\n", yytext, token_type, lineno);
}

/*void yyerror(char *message){
   printf("Error: \"%s\" in line %d. Token = %s\n", message, yylineno, yytext);
   exit(1);
}*/

int main(int argc, char *argv[]){
   yyin = fopen(argv[1], "r");
   yylex();
   fclose(yyin);
   return 0;
}