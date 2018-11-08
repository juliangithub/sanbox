/*===============================================================
 *	Copyright (C) 2018 All rights reserved.
 *	
 *	Filename：mem_trace.c
 *	Author：julian.chen
 *	Date：2018-10-26
 *	Discription:
 *	
 *	release notes：
 *
 ================================================================*/
//#include "mem_trace.h"
#include <stdio.h>
#include <stdlib.h>
#include <mcheck.h>

/*
   user guide
#step1:
gcc -g mem_trace.c  -o mem_trace.d 
#step2:
./mem_trace.d
#step3
mtrace mem_trace.d mtrace.log 
*/
int main(void) {

	setenv("MALLOC_TRACE", "mtrace.log", 1);
	mtrace(); /* Starts the recording of memory allocations and releases */
	int* a = NULL;
	for (int i = 0; i < 10; ++i)
	{

		a = malloc(sizeof(int)); /* allocate memory and assign it to the pointer */
		if (a == NULL) {
			return 1; /* error */
		}
	}


	/*	
	//uncomment this part of code memtrace will not work as you wish.
	int i = 0;
	while(1){
	printf("%d \n", ++i);
	sleep(1);
	}
	*/
	//free(a); /* we free the memory we allocated so we don't have leaks */
	//muntrace();

	return 0; /* exit */

}


