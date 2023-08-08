#include "headers.h"
#include "declarations.h"

void search_node(node_t * head)
{
    #ifdef PRINT
    printf("========Enter function : %s ==========\n",__func__);
    #endif 
    int index =0;
    int flag=0;
    void * key=malloc(sizeof(10));
    printf("Enter the node data, after which this node is inserted\n");
    key = enter_data();

    node_t *temp;
    temp = head;
    while(temp!=NULL){

     if((*(int *)(temp->data)) == (*(int *)(key)))
    {   
        flag=1; 
        break;
    }
    else
    flag=0;
    index ++;
    temp=temp->next; 

}
    if(temp==NULL)
    {
        printf("key not found\n");
    }
    if(flag == 1)
    printf("key : %d found at index : %d\n",(*(int *)key),index);
    else
    printf("key not found\n");

    #ifdef PRINT
    printf("========Exit function : %s ==========\n",__func__);
    #endif 
}