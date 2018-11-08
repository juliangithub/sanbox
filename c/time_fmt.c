/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：time_fmt.c
*	Author：julian.chen
*	Date：2018-10-27
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "time_fmt.h"

#include <stdio.h>
#include <time.h>
#include <sys/time.h>
int main(int argc, char const *argv[])
{
	time_t t;
	/*struct tm *lt;*/
	time(&t);
	
	printf("calendar times:  %lu senconds\n", t);
	printf("localtime: %s\n", asctime(localtime(&t)));
	printf("gmtime: %s\n", asctime(gmtime(&t)));
	printf("ctime: %s\n", ctime(&t));



	return 0;
}