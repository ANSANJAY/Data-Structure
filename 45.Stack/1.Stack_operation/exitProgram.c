#include"headers.h"
#include"declarations.h"

void* exitProgram(void *arg)
{

#ifdef PRINT
	printf("%s : Begin \n",__func__);
#endif
	if(strncmp((char*)arg,"success",7)==0)
	exit(EXIT_SUCCESS);
	if(strncmp((char*)arg,"failure",7)==0)
	exit(EXIT_FAILURE);

#ifdef PRINT
        printf("%s : End  \n",__func__);
#endif
	return 0;
}
