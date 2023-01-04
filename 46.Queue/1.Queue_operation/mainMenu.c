#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* mainMenu(void* arg)//mainMenu called with start as argument
{
        int i;
        Queue *que; //  pointer to structure start 
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
        que = (Queue*)arg; // argument received is start , data type as void * , typecasting it to Node*
        printf("%s :____MAIN MENU ____\n",__func__);

       	if(!que)//if start is NUll create linked list
        printf("%s :1: CREATE QUEUE\n",__func__);
       	else if(que)
       	{
        printf("%s :2: QUEUE ELEMENT\n",__func__);
       //printf("%s :3: DELETE \n",__func__);
        printf("%s :3: DISPLAY QUEUE\n",__func__);
        printf("%s :4: DEQUEUE ELEMENT\n",__func__);
        printf("%s :5: SEARCH QUEUE\n",__func__);

        }
        printf("%s :0: EXIT PROGRAM ____\n",__func__);
        printf("%s :Please enter your choice: \n",__func__);
        scanf("%d",&i);

                if(i==0)
                 (*fptr[1])((void*)"success");//exit program
                else if(i==1)
                arg=(*fptr[2])(arg); //Create queue
		else if (i == 2)
		(*fptr[3])(arg);//QUE ELEMENT
		else if (i == 3)
                (*fptr[4])(arg);//DISPLAY QUEUE
		else if (i == 4)
                (*fptr[5])(arg);//DEQUEUE ELE
		 else if (i == 5)
                (*fptr[6])(arg);//DEQUEUE ELE

	
	#ifdef PRINT
        printf("%s :    End \n",__func__);
#endif
        return (void* )arg;
}




