#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* dequeuelement(void* arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
		Queue *que;
		que = (Queue*)arg;

		if(que->rear == -1 || que->rear==que->front)
		{
		printf("Queue is empty\n");
		return arg;
		}
		
		printf("Element  dequeued : %d\n",*(que->queueptr+(que->front+1)));
		que->front++;

#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return arg;
}
