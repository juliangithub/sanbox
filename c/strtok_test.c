#include <stdio.h>
#include <string.h>
int main()
{
    char buf[] = "clt_reset=1";
    char *p = NULL;
    char *p1 = NULL;
    p = strtok(buf, ",");
    if (NULL == p)
    {
    	printf("NULL \n");
    }

    p1 = (char *)strtok(NULL, ",");
    printf("p:%p,p1:%p\n", p, p1);

	printf("p:%s,p1:%s\n", p, p1);

return 0;
}