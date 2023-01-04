#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* displayStack(void* arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	int i;
	Stack *stk;
	stk = (Stack*)arg;
	
	for(i= stk->top; i>-1;i--)
		printf("Index : %d, Value at index:%d is %d\n",i,i,*(stk->stkptr+i) );
	

#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return arg;
}
