/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：pragma.c
*	Author：julian.chen
*	Date：2018-08-24
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "pragma.h"
#include <stdio.h>
#include <string.h>
#pragma pack(4)
//#pragma pack(2)
typedef struct mem_algin
{
	char c;
	int num;
	short s;
	char buf[13];

}mem_algin;

 void dump_buf_in_byte(unsigned char *byte, size_t size)
 {
 	int i = 0;
 	for(i=0; i<size; i++, byte++)
 	{
 		printf("\taddr:%x \t %x", byte, *byte);
 		if(i%4 == 0 && i != 0)
 		{
 			printf("\n");
 		}
 	}
 	printf("\n");

 }
 	
int main(int argc, char const *argv[])
{
	mem_algin m;
	memset(&m, 0x0 ,sizeof(m));
	m.num = -1;
	memset(&m.c, 0x11, sizeof(m.c));
	memset(&m.s, 0x22, sizeof(m.s));
	memset(&m.buf, 0x33, sizeof(m.buf));

	printf("sizeof mem_algin %zu\n", sizeof(m));
	dump_buf_in_byte(&m, sizeof(m));
	return 0;
}