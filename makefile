all: stack structure compiler clear

stack:
	gcc -c -g -Wall ./src/stack.c -o stack;
	cp stack ./src;

structure:
	gcc -c -g -Wall ./src/structures.c -o structure;
	cp structure ./src;

compiler: lex.yy.c
	gcc -c -g -Wall ./src/lex.yy.c -o tradutor -lfl;

lex.yy.c:
	flex src/lexer.l;
	cp lex.yy.c ./src;

clear:
	rm stack structure lex.yy.c