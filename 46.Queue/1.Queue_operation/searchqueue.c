#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* searchqueue(void* arg)
{
	
#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	int key =0;
        int i=0;
        Queue *que;
        que = (Queue*)arg;


printf("Enter the key element :\n");
scanf("%d",&key);
	

	for(i=que->front+1;i<=que->rear;i++)

	{
		if(key == *(que->queueptr+i))
			printf("Key is present at %d\n",i);
	}

	printf("Key not found\n");
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	return arg;
}
