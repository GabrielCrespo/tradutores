tradutor:
	flex src/lexer.l;
	gcc -g -Wall ./src/symboltable.c lex.yy.c -o tradutor -lfl;
	cp lex.yy.c ./src;
	rm lex.yy.c;