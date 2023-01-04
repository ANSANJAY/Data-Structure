#! /bin/bash

CC=gcc
DF= -g
CF= -c

Queue:main.o mainMenu.o dequeuelement.o init.o createQueue.o displayqueue.o queueelement.o exitProgram.o searchqueue.o
	${CC} -o Queue main.o mainMenu.o searchqueue.o dequeuelement.o init.o createQueue.o displayqueue.o queueelement.o exitProgram.o
searchqueue.o: searchqueue.c headers.h dataStruct.h declarations.h
	${CC} -c searchqueue.c
dequeuelement.o: dequeuelement.c headers.h dataStruct.h declarations.h
	${CC} -c dequeuelement.c

init.o: init.c headers.h dataStruct.h declarations.h
	${CC} -c init.c

main.o: main.c headers.h dataStruct.h declarations.h
	${CC} -c main.c

createQueue.o: createQueue.c headers.h dataStruct.h declarations.h
	${CC} -c createQueue.c

mainMenu.o: mainMenu.c headers.h dataStruct.h declarations.h
	${CC} -c mainMenu.c

displayqueue.o: displayqueue.c headers.h dataStruct.h declarations.h
	${CC} -c displayqueue.c

queueelement.o: queueelement.c headers.h dataStruct.h declarations.h
	${CC} -c queueelement.c

exitProgram.o: exitProgram.c headers.h dataStruct.h declarations.h
	${CC} -c exitProgram.c
clean: 
	-rm *.o
	-rm Queue

