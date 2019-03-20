/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：array_dimension_2.c
*	Author：julian.chen
*	Date：2019-03-08
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "array_dimension_2.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
		char req_mode_str[][64] = {"get", "set", "get_table", "add_table", "del_table"
		};
		printf("%s\n", req_mode_str[0]);
		printf("%s\n", req_mode_str[1]);
		printf("%s\n", req_mode_str[2]);
		printf("%s\n", req_mode_str[3]);
		printf("%s\n", req_mode_str[4]);
	return 0;
}
