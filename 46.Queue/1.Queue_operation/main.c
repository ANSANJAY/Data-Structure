/*call main Menu in infinite loop
 * calls init()
 *
 */

#include"headers.h"
#include"declarations.h"
#include"dataStruct.h"

int main()
{
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif
        init();
        Queue *que;//pointer to structure Node as start
        que = NULL;
while(1)
        que=(*fptr[0])((void*)que); // call mainMenu with start NULL as arg

#ifdef PRINT
        printf("%s :    End  \n",__func__);
#endif
}
  
