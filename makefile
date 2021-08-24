all: stack compiler clean

stack:
	gcc -c -g -Wall ./src/stack.c -o stack;
	cp stack ./src;

compiler: lex.yy.c
	gcc -g -Wall ./src/lex.yy.c -o tradutor -lfl;

lex.yy.c:
	flex src/lexer.l;
	cp lex.yy.c ./src;

clean:
	rm stack lex.yy.c