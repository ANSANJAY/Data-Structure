#include "headers.h"
#include "declarations.h"
//#include "data_struct.h"

void *  enter_data()
{
       #ifdef PRINT

    printf("========Enter function : %s ==========\n",__func__);
        #endif 

//covert into menu
   int choice;
    void * data = malloc(sizeof(10));
    printf("Enter the choice for data type  : \n");
   printf("1 : int\n");
   printf("2 : character\n");
        printf("3 : float\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
            scanf("%d",data);
            printf("size : %d \n" , sizeof(*(int *)(data)));
            printf("data : %d \n" , (*(int *)(data)));

            break;
    case 2: 
            scanf(" %c",data);
           printf("size : %d \n" , sizeof(*(char *)(data)));
            printf("data : %c \n" , (*(char *)(data)));
            break;
    case 3:
            scanf("%lf",data);
            printf("size : %d \n" , sizeof(*(double *)(data)));
            printf("data : %lf \n" , (*(double *)(data)));
            break;
    }
        #ifdef PRINT

    printf("========Exit function : %s ==========\n",__func__);
        #endif 

     return data;
}