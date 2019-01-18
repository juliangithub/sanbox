#include <stdio.h>
#include <string.h>
void main()
{
    char buf[] = "clt_reset=1";
    char *p = NULL;
    char *p1 = NULL;
    p = strtok(buf, ",");
    p1 = (char *)strtok(NULL, ",");
printf("p:%s,p1:%s\n", p, p1);
}