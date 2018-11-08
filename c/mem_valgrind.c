/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：mem_valgrind.c
*	Author：julian.chen
*	Date：2018-10-26
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "mem_valgrind.h"

//main.c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main()
{
    printf("start init\n");
    char *p = (char *)malloc(1024);
    char *ptr;
    if(ptr)
    {
        printf("ptr:%p\n", ptr);
    }
    getchar();
    return 0;
}
