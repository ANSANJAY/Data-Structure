

#define NOF 20
#define PRINT

int init();

extern void* mainMenu(void*);
extern void* exitProgram(void*);
extern void* createQueue(void*);
extern void* queueelement(void*);
extern void* displayqueue(void*);
extern void* dequeuelement(void*);
extern void* searchqueue(void*);

extern void* (*fptr[NOF])(void*);//array of function pointer


