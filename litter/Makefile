CC = gcc

CFLAGS = -std=c11 -Wall -Wextra -pedantic

main:             y.tab.o lex.yy.o main.o ../src tree.o ../src/modules/pretty/include pretty.o memory.h memory.o
	          $(CC) lex.yy.o y.tab.o tree.o pretty.o memory.o main.o -o exp -lfl

y.tab.c y.tab.h:  bison/exp.y
	          bison -y -d bison/exp.y

lex.yy.c:         ../src/modules/scanner/flex/exp.l y.tab.h
	          flex flex/exp.l