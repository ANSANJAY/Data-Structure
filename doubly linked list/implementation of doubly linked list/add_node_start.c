#include "headers.h"
#include "declarations.h"
//#include "data_struct.h"

void add_node_start(node_t ** head)
{
        #ifdef PRINT
        printf("========Enter function : %s ==========\n",__func__);
        #endif 
            void * val = malloc(sizeof(10));

            val = enter_data();
        node_t * add_new_node = malloc(sizeof(node_t));
        add_new_node = create_node(val);
        if((*head) == NULL)
        {
        *head = add_new_node;
        }
        else{
        add_new_node->prev =NULL;
        add_new_node->next=(*head);
        (*head)->prev=add_new_node;
        *head = add_new_node;
        }

    
    #ifdef PRINT
    printf("========Inserion at beginning successful function==========\n");
    printf("========Updated Linkedlist==========\n");
    print_dll_value(*head);
    print_dll_links(*head);
    printf("========Exit function : %s ==========\n",__func__);
        #endif 

}