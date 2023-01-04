#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* displayqueue(void* arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	int i=0;
	Queue *que;
	que = (Queue*)arg;
	
	for(i= que->front+1;i<=que->rear;i++)
	printf("Index : %d, Value at index:%d is %d\n",i,i,*(que->queueptr+i) );
	

#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return arg;
}
