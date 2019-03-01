/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：printf_fmt.c
*	Author：julian.chen
*	Date：2019-02-25
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "printf_fmt.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num = 10241024;

	printf("%#4x\n", num);
	printf("%#4.4x\n", num);
	printf("%#2.2x\n", num);
	//printf("%#d\n", num);
	printf("%#o\n", num);
	return 0;
}