/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：scope.c
*	Author：julian.chen
*	Date：2019-04-01
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "scope.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int scp_stack = 11;

	{
		scp_stack = 22;
		int scp_nest = 33;
	}	
	scp_nest = 44;//error: ‘scp_nest’ undeclared (first use in this function)

	return 0;
}
