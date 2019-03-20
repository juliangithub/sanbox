/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：point.c
*	Author：julian.chen
*	Date：2019-03-14
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "point.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("sizeof void* %zu \n", sizeof(void*));
	printf("sizeof char %zu \t sizeof char*:  %zu\n", sizeof(char), sizeof(char*));
	printf("sizeof int %zu \t sizeof int*:  %zu\n", sizeof(int), sizeof(int*));
	printf("sizeof float %zu \t sizeof float*: %zu\n", sizeof(float), sizeof(float*));
	printf("sizeof double %zu \t sizeof double* %zu\n", sizeof(double), sizeof(double*));
	printf("sizeof long %zu \t sizeof long* %zu\n", sizeof(long), sizeof(long*));
	printf("sizeof long long %zu \t sizeof long long* %zu\n", sizeof(long long), sizeof(long long*));
	return 0;
}
