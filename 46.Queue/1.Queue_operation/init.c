#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* mainMenu(void*);
void* exitProgram(void*);
void* createQueue(void*);
void* queueelement(void*);
void* displayqueue(void*);
void* dequeuelement(void*);
void* searchqueue(void*);


void* (*fptr[NOF])(void*);//array of function pointer


int init()
{
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif

                //define your fptr

fptr[0]=mainMenu;
fptr[1]=exitProgram;
fptr[2]=createQueue;
fptr[3]=queueelement;
fptr[4]=displayqueue;
fptr[5]=dequeuelement;
fptr[6]=searchqueue;



#ifdef PRINT
        printf("%s :    End       \n",__func__);
#endif
                return 0;
}
