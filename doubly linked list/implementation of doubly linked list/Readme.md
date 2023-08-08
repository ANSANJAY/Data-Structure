# Doubly Linked List in C

A comprehensive implementation of the **Doubly Linked List** data structure using the C programming language. This repository provides various functionalities for manipulating the doubly linked list.

## Features

- **Insert Node at the Start:** Adds a new node at the beginning of the list.
- **Insert Node at the End:** Appends a new node at the end of the list.
- **Insert Node After a Key:** Inserts a new node after a specific node identified by its key.
- **Delete Node:** Removes a node from the list.
- **Search Node:** Searches for a node in the list by its value.
- **Print Values:** Display the values of all the nodes in the list.
- **Print Addresses:** Display the memory addresses of all the nodes in the list.

## Usage

After compiling the program:

```bash
$ ./doubly_linked_list
```

You will be presented with the main menu:
```bash
======== Main Menu =======
======== Enter correct choice =======
Enter 1 : Inserting a new node at the start of the linked list
Enter 2 : Inserting a new node at the end of the linked list
Enter 3 : Inserting a new node at the after the given key of the linked list
Enter 4 : Delete a node  of the linked list
Enter 5 : Search for a node of the linked list
Enter 6 : Print the values of the linked list
Enter 7 : Print the addresses of the linked list
```
Choose an option by entering the respective number.

## Makefile Description:
This Makefile is used to compile a Doubly Linked List program in C. The compiler defined is `gcc`.

## Targets and their Descriptions:

`dll` target:

Compiles the main program by linking all the object files.

```bash

dll: main.o add_node_end.o add_node_start.o create_node.o enter_data.o print_dll_links.o print_dll_value.o main_menu.o add_node_nth.o delete_node.o search_node.o

	${CC} -o dll main.o add_node_end.o add_node_start.o create_node.o enter_data.o print_dll_links.o print_dll_value.o main_menu.o add_node_nth.o delete_node.o search_node.o
```

# Individual object file targets:
Each of these targets is used to compile an individual .c file into an .o (object) file.

```bash
add_node_start.o: add_node_start.c headers.h declarations.h
	${CC} -c add_node_start.c

... [similar rules for other .o files]

search_node.o: search_node.c headers.h declarations.h
	${CC} -c search_node.c
```

`clean` target:

This target is used to clean up all the compiled object files and the final binary.

```bash
clean:
	-rm *.o
	-rm dll
```

To use the Makefile, ensure that you have all the required `.c` and `.h` files in your directory. Then, run:

```bash
$ make
```

To clean up the object files and binary, run:

```bash
$ make clean
```

