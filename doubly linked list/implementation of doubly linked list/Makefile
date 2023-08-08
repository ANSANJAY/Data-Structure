#! /bin/bash
CC=gcc

dll: main.o add_node_end.o add_node_start.o create_node.o enter_data.o print_dll_links.o print_dll_value.o main_menu.o add_node_nth.o delete_node.o search_node.o
	${CC} -o dll main.o add_node_end.o add_node_start.o create_node.o enter_data.o print_dll_links.o print_dll_value.o main_menu.o add_node_nth.o delete_node.o search_node.o

add_node_start.o: add_node_start.c headers.h declarations.h
	${CC} -c add_node_start.c

create_node.o: create_node.c headers.h declarations.h
	${CC} -c create_node.c

enter_data.o: enter_data.c headers.h declarations.h
	${CC} -c enter_data.c

print_dll_links.o: print_dll_links.c headers.h declarations.h
	${CC} -c print_dll_links.c

print_dll_value.o: print_dll_value.c headers.h declarations.h
	${CC} -c print_dll_value.c

add_node_end.o: add_node_end.c headers.h declarations.h
	${CC} -c add_node_end.c

main_menu.o: main_menu.c headers.h declarations.h
	${CC} -c main_menu.c

add_node_nth.o: add_node_nth.c headers.h declarations.h
	${CC} -c add_node_nth.c

delete_node.o: delete_node.c headers.h declarations.h
	${CC} -c delete_node.c

search_node.o: search_node.c headers.h declarations.h
	${CC} -c search_node.c


clean:
	-rm *.o
	-rm dll
