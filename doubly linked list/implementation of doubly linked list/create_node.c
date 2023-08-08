#include "headers.h"
#include "declarations.h"
//#include "data_struct.h"

node_t * create_node(void * val)
{
        #ifdef PRINT
    printf("========Enter function : %s ==========\n",__func__);
        #endif 


       node_t * new_node= malloc(sizeof(node_t));
        new_node->data=val;
        new_node->prev = NULL;
        new_node->next =NULL;

        #ifdef PRINT

    printf("========Exit function : %s ==========\n",__func__);
        #endif 

    return new_node;
}