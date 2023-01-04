/*
 * create stack 
 * initiate all the values in data structure
 * 
 * typedef struct queue
{
        int size;
         int *queueptr;
         int rear;
         int front;
 }Queue
	
*/
	

#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* createQueue(void*)
{

	Queue *que;

#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif

	que = (Queue*)malloc(sizeof(Queue));

	if(!que)
	{
	perror("malloc");
	(*fptr[1])((void*)"failure");	
	}

	printf("Enter queue size :\n");
	scanf("%d",&que->size);
	que->rear = -1;
	que->front = -1;

	que->queueptr = (int*)malloc(sizeof(int)*que->size);
	if(!que->queueptr)
	{
	perror("malloc");
	free(que);
	(*fptr[1])((void*)"failure");
	}
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif

	return (void*)que;
}
