#include "headers.h"
#include "declarations.h"
//#include "data_struct.h"

void print_dll_value(node_t * head)
{
        #ifdef PRINT

    printf("========Enter function : %s ==========\n",__func__);
        #endif 

    node_t * temp;
    temp = head;
     printf("||List Begins||Node Value");
    while(temp!=NULL)
    {
    printf("||%d",*(int *)(temp->data));
    temp = temp->next;
    }
    printf("||List Ends||\n");

    #ifdef PRINT

    printf("========Exit function : %s ==========\n",__func__);
    #endif 


}