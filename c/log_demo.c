/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：log_demo.c
*	Author：julian.chen
*	Date：2019-08-29
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <stdio.h>
#include "log.h"

int main(int argc, char const *argv[])
{
	log_show_style();
	printf("%p\n", log_show_style);
	return 0;
}
