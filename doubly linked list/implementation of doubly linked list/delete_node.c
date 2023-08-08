#include "headers.h"
#include "declarations.h"

void delete_node(node_t **head)
{
    #ifdef PRINT
    printf("========Enter function : %s ==========\n",__func__);
    #endif 

    void * key=malloc(sizeof(10));
    printf("Enter the node data, after which this node is inserted\n");
    key = enter_data();

    node_t * temp = malloc(sizeof(node_t));
    temp = *head;

    if ((*head)==NULL)
    printf("Linked list is empty, cannot be deleted\n");

    while ((*(int *)temp->data)!=(*(int *)key))
    {
        temp = temp->next;
    }
    if(temp == (*head))
    {
        *head = (*head)->next;
        (*head)->prev=NULL;
        free(temp);
    }
    else if (temp->next == NULL)
    {
        temp->prev->next=NULL;
        free(temp);
    }
    else{
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }

    #ifdef PRINT
    printf("========Exit function : %s ==========\n",__func__);
    #endif 
}