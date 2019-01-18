/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：fgets.c
*	Author：julian.chen
*	Date：2018-09-28
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "fgets.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	FILE *fp = NULL;
	char IPaddress[64];
	char HWtype[64];
	char Flags[64];
	char HWaddress[64];
	char Mask[64];
	char Device[64];
	char buf[128]={0x0};
	char *pfgets = NULL;
	fp = fopen("/proc/net/arp", "r");
	if(NULL == fp)
		exit(0);

	pfgets = fgets(buf, sizeof(buf), fp);
	printf("head:%s pfgets :%s\n",buf, pfgets);
	int i = 0;
	while(NULL != fgets(buf, sizeof(buf), fp) )
	{
		printf("line[%d]%s\n",i++, buf );
		sscanf(buf, "%[^ ] %[^ ] %[^ ] %[^ ] %[^ ] %[^ ]", IPaddress, HWtype, Flags, HWaddress, Mask, Device);
		printf("%s\n",IPaddress);
		printf("%s\n",HWtype);
		printf("%s\n",Flags);
		printf("%s\n",HWaddress);
		printf("%s\n",Mask);
		printf("%s\n",Device);
	}
			

	return 0;
}