tradutor:
	flex src/lexer.l;
	bison -d src/sintatic.y;
	gcc -g -Wall ./src/symboltable.c ./src/ast.c sintatic.tab.c lex.yy.c -o tradutor -lfl;
	cp lex.yy.c sintatic.tab.c ./src;
	cp sintatic.tab.h ./lib;
	rm lex.yy.c sintatic.tab.c sintatic.tab.h;