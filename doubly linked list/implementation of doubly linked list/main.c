#include "headers.h"
#include "declarations.h"
//#include "data_struct.h"

int main()
{
        #ifdef PRINT

    printf("========Enter function : %s ==========\n",__func__);
        #endif 


  node_t * head = malloc(sizeof(node_t));
  head = NULL;
    while(1)
    head = main_menu(head);

    //add_node_end(&head);

    //add_node_end(&head);

   // add_node_end(&head);


    //add_node_start(&head);



   

    //print_dll_links(head);
//print_dll_value(head);

       #ifdef PRINT

    printf("========Exit function : %s ==========\n",__func__);
        #endif 

    return 0;
}