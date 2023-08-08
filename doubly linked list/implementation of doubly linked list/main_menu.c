#include "headers.h"
#include "declarations.h"

node_t* main_menu(node_t * head)
{
    #ifdef PRINT
    printf("========Enter function : %s ==========\n",__func__);
    #endif 

    int choice;
    printf("======== Main Menu =======\n");
    printf("======== Enter correct choice =======\n");
    printf("Enter 1 : Inserting a new node at the start of the linked list\n");
    printf("Enter 2 : Inserting a new node at the end of the linked list\n");
    printf("Enter 3 : Inserting a new node at the after the given key of the linked list\n");
    printf("Enter 4 : Delete a node  of the linked list\n");
    printf("Enter 5 : Search for a node of the linked list\n");
    printf("Enter 6 : Print the values of the linked list\n");
    printf("Enter 7 : Print the addrresses of the linked list\n");
    printf("======== Main Menu End =======\n");


    scanf("%d",&choice);
    
    switch(choice){
    case 1:add_node_start(&head);
        break;
    case 2:add_node_end(&head);
        break;
    case 3:add_node_nth(&head);
        break;
    case 4:delete_node(&head);
        break;
    case 5:search_node(head);
        break;
    case 6:print_dll_value(head);
     break;
    case 7:print_dll_links(head);
    break;
    }

    #ifdef PRINT
    printf("========Exit function : %s ==========\n",__func__);
    #endif 
return head;
   
}