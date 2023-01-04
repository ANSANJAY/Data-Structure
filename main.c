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
        Stack *stack;//pointer to structure Node as start
        stack = NULL;
while(1)
        stack=(*fptr[0])((void*)stack); // call mainMenu with start NULL as arg

#ifdef PRINT
        printf("%s :    End  \n",__func__);
#endif
}
  
