/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：common.c
*	Author：julian.chen
*	Date：2019-11-18
*	Discription:
*	
*	release notes：
*
================================================================*/
#include "common.h"
#include "log.h"
// extern int stack_val ;
int showStack(){

	printf("showStack -->stack_val : %x\n", &stack_val);
}