/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：process.c
*	Author：julian.chen
*	Date：2018-08-27
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "process.h"
#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
void static_stack(int add )
{
	static int num = 0;
	printf("pagesize: %x\n", getpagesize());
	printf("pid:%d  addr: %p  num: %d\n", getpid(), &num, num);
	num += add;
	printf("pid:%d  addr: %p  num: %d <<<<\n", getpid(), &num, num);
}
int main(int argc, char**argv)
{
	pid_t pid;

	printf("%d\n", getpid());

	pid = fork();
	if(pid<0){
		perror("fork");
	}
	else if(pid == 0 )
	{
		static_stack(2);	
		static_stack(2);	
		static_stack(2);	
		static_stack(2);
		sleep(3600);	
		exit(0);
	}
	else{

		sleep(2);
		static_stack(1);		
		static_stack(1);		
		static_stack(1);		
		static_stack(1);		
	}
	printf("============================\n");
	printf("%d\n", getpid());

	pid = fork();
	if(pid<0){
		perror("fork");
	}
	else if(pid == 0 )
	{
		static_stack(5);	
		static_stack(5);	
		static_stack(5);	
		static_stack(5);	
		static_stack(5);	
		static_stack(5);	
		sleep(3600);
		exit(0);
	}
	else{
		sleep(2);
		static_stack(2);		
		static_stack(2);		
		static_stack(2);		
		static_stack(2);		
	}

	sleep(3600);
}
