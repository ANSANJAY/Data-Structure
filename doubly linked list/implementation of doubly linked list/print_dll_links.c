#include "headers.h"
#include "declarations.h"
//#include "data_struct.h"

void print_dll_links(node_t * head)
{
        #ifdef PRINT

    printf("========Enter function : %s ==========\n",__func__);
        #endif 


    node_t * temp;
    temp = head;
    //printf("||List Begins||Node Adrreses||");

    while(temp!=NULL)
    {

      // printf(" %p -->",temp);
    #ifdef PRINT
    printf(" prev = %p -->\n",temp->prev);
    printf(" own  = %p -->\n",temp);
    printf(" next = %p\n",temp->next);
    #endif
        temp = temp->next;
    }
    // printf("||List Ends||\n");
        
    #ifdef PRINT

    printf("========Exit function : %s ==========\n",__func__);
        #endif 

}