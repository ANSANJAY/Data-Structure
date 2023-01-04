#! /bin/bash

CC=gcc
DF= -g
CF= -c

Stack:main.o mainMenu.o createStack.o pushelement.o displayStack.o init.o exitProgram.o popelement.o
	${CC} -o Stack main.o mainMenu.o createStack.o pushelement.o displayStack.o init.o exitProgram.o popelement.o

popelement.o: popelement.c headers.h dataStruct.h declarations.h
	${CC} -c popelement.c

init.o: init.c headers.h dataStruct.h declarations.h
	${CC} -c init.c

main.o: main.c headers.h dataStruct.h declarations.h
	${CC} -c main.c

createStack.o: createStack.c headers.h dataStruct.h declarations.h
	${CC} -c createStack.c

mainMenu.o: mainMenu.c headers.h dataStruct.h declarations.h
	${CC} -c mainMenu.c

displayStack.o: displayStack.c headers.h dataStruct.h declarations.h
	${CC} -c displayStack.c

pushelement.o: pushelement.c headers.h dataStruct.h declarations.h
	${CC} -c pushelement.c

exitProgram.o: exitProgram.c headers.h dataStruct.h declarations.h
	${CC} -c exitProgram.c
clean: 
	-rm *.o
	-rm linklist

