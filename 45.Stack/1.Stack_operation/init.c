#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

void* mainMenu(void*);
void* exitProgram(void*);
void* createStack(void*);
void* pushelement(void*);
void* displayStack(void*);
void* popelement(void*);

void* (*fptr[NOF])(void*);//array of function pointer


int init()
{
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif

                //define your fptr

fptr[0]=mainMenu;
fptr[1]=exitProgram;
fptr[2]=createStack;
fptr[3]=pushelement;
fptr[4]=displayStack;
fptr[5]=popelement;



#ifdef PRINT
        printf("%s :    End       \n",__func__);
#endif
                return 0;
}
