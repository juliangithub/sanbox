/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：exchange.c
*	Author：julian.chen
*	Date：2018-11-30
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int a = 2;
        int b = 3;
        printf("[%d] %d \t %d \n", __LINE__, a, b);
        a = a+b;
        b = a-b;
        a = a-b;
        printf("[%d] %d \t %d \n", __LINE__, a, b);
        int i;
        char str[20]="123abcABC";
        for(i=0;i<strlen(str);i++){
                printf("ASIIC:%d \t char: %c \n", str[i], str[i]);
        }

	return 0;
}