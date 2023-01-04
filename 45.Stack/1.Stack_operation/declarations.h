

#define NOF 20
#define PRINT

int init();

extern void* mainMenu(void*);
extern void* exitProgram(void*);
extern void* createStack(void*);
extern void* pushelement(void*);
extern void* displayStack(void*);
extern void* popelement(void*);

extern void* (*fptr[NOF])(void*);//array of function pointer


