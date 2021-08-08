run: 
	flex src/lexer.l; 
	gcc -Wall -g lex.yy.c -o tradutor -lfl;