#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* mainMenu(void* arg)//mainMenu called with start as argument
{
        int i;
        Stack *stk; //  pointer to structure start 
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
        stk = (Stack*)arg; // argument received is start , data type as void * , typecasting it to Node*
        printf("%s :____MAIN MENU ____\n",__func__);

       	if(!stk)//if start is NUll create linked list
        printf("%s :1: CREATE STACK\n",__func__);
       	else if(stk)
       	{
        printf("%s :2: PUSH ELEMENT\n",__func__);
       //printf("%s :3: DELETE STACK\n",__func__);
        printf("%s :3: DISPLAY LINK LIST\n",__func__);
       printf("%s :4: POP ELEMENT\n",__func__);
        }
        printf("%s :0: EXIT PROGRAM ____\n",__func__);
        printf("%s :Please enter your choice: \n",__func__);
        scanf("%d",&i);

                if(i==0)
                 (*fptr[1])((void*)"success");//exit program
                else if(i==1)
                arg=(*fptr[2])(arg); //create stack : createLinklist
		else if (i == 2)
		(*fptr[3])(arg);//PUSH ELEMENT
		else if (i == 3)
                (*fptr[4])(arg);//DISPLAY LINK LIST
		else if (i == 4)
                (*fptr[5])(arg);//DISPLAY LINK LIST
	
	#ifdef PRINT
        printf("%s :    End \n",__func__);
#endif
        return (void* )arg;
}




