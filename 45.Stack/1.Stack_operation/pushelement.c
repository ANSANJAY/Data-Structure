#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* pushelement(void* arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	Stack *stk;

	stk = (Stack*)arg;

	if(stk->top == stk->size-1)
	{
	printf("Stack is full\n");
	return arg;
	}
stk->top++;
printf("Enter value to be pushed\n");
scanf("%d",stk->stkptr+(stk->top));

#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return arg;
}
