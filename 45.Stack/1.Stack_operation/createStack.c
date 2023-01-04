/*
 * create stack 
 * initiate all the values in data structure
 * {
        int size;
         int *stkptr;
         int top;
	 }
	
	 scan size
	 store it in stk->size
	set stk->top ==-1
	allocate space for stkptr
	stk->stkptr 
	
*/
	

#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* createStack(void*)
{

	Stack *stk;

#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif

	stk = (Stack*)malloc(sizeof(Stack));

	if(!stk)
	{
	perror("malloc");
	(*fptr[1])((void*)"failure");	
	}

	printf("Enter stack size :\n");
	scanf("%d",&stk->size);
	stk->top = -1;
	stk->stkptr = (int*)malloc(sizeof(int)*stk->size);
	if(!stk->stkptr)
	{
	perror("malloc");
	free(stk);
	(*fptr[1])((void*)"failure");
	}
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif

	return (void*)stk;
}
