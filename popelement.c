#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* popelement(void* arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
		Stack *stk;
		stk = (Stack*)arg;

		if(stk->top == -1)
		{
		printf("Stack is empty\n");
		return arg;
		}

		printf("Element popped : %d\n",*(stk->stkptr+(stk->top)));
		stk->top--;

#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return arg;
}
