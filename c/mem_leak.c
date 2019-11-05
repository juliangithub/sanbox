/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：mem_leak.c
*	Author：julian.chen
*	Date：2019-06-11
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "mem_leak.h"

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char *stack_list[512] = {0x0};
	int i = 0;
	while(i<512){
		stack_list[i] = (char*) malloc(16);
		printf("stack %d add : 0x%0x\n", i, stack_list[i]);
		snprintf(stack_list[i], 16, "i:%d", i);
		printf("stack_list[%d] : %s\n", i, stack_list[i]);
		sleep(5);
		i++;
	}
	return 0;
}