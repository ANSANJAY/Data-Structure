#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* queueelement(void* arg)
{
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	Queue *que;

	que = (Queue*)arg;

	if(que->rear == que->size-1)
	{
	printf("Queue is full\n");
	return arg;
	}
que->rear++;
printf("Enter value to be pushed\n");
scanf("%d",que->queueptr+(que->rear));

#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return arg;
}
