#include "headers.h"
#include "declarations.h"

void add_node_end(node_t **head)
{

    #ifdef PRINT
    printf("========Enter function : %s ==========\n",__func__);
    #endif
    void * val = malloc(sizeof(10));
    val = enter_data();
    node_t * add_new_node = malloc(sizeof(node_t));
    add_new_node = create_node(val);
  if ((*head)== NULL)
  {
       *head = add_new_node;
  }
 else{
    node_t *last = *head;

     while(last->next !=NULL)
    {
       last = last->next;
    }
    last->next=add_new_node;
    add_new_node->next = NULL;
    add_new_node->prev = last;
    }



    #ifdef PRINT
 printf("========Inserion at end successful function==========\n");
printf("========Updated Linkedlist==========\n");
print_dll_value(*head);
print_dll_links(*head);
    printf("========Exit function : %s ==========\n",__func__);
    #endif

}