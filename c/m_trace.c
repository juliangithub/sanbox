/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：m_trace.c
*	Author：julian.chen
*	Date：2018-11-05
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "m_trace.h"
#include <stdio.h>
#include <stdlib.h>
#include <mcheck.h>

void *allocate (void)
{
  return (malloc(1000));
}

int main()
{
 setenv("MALLOC_TRACE", "m_trace.log", 1);
  mtrace();
  allocate();
  allocate();
}