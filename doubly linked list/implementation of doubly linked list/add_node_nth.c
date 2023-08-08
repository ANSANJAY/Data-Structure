#include "headers.h"
#include "declarations.h"

void add_node_nth(node_t ** head)
{
    #ifdef PRINT
    printf("========Enter function : %s ==========\n",__func__);
    #endif 
    void * key=malloc(sizeof(10));
    printf("Enter the node data, after which this node is inserted\n");
    key = enter_data();
    void * val = malloc(sizeof(10));
    val = enter_data();
    node_t * add_new_node = malloc(sizeof(node_t));
    add_new_node=create_node(val);
    node_t * temp = *head;
    #ifdef DEBUG
    printf("temp :  %d\n",(*(int *)(temp->data)));
    printf("key :  %d\n",(*(int *)(key)));
    #endif
    while((*(int *)(temp->data)) != (*(int *)(key)))
    {
    #ifdef DEBUG
    printf("temp :  %d\n",(*(int *)(temp->data)));
    printf("key :  %d\n",(*(int *)(key)));
    #endif
    temp=temp->next;
    }
    #ifdef DEBUG

    printf("temp : %p\n",temp);
    printf("temp->next :  %p\n",temp->next);
    printf("new_node :  %p\n",add_new_node);
    printf("temp->next->prev :  %p\n",temp->next->prev);
        #endif

    add_new_node->next = temp->next;
    add_new_node->prev = temp;

    temp->next = add_new_node;
    temp->next->prev =add_new_node;



    #ifdef PRINT
    printf("========Exit function : %s ==========\n",__func__);
    #endif 
}