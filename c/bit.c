/*===============================================================
 *	Copyright (C) 2020 All rights reserved.
 *	
 *	Filename：bit.c
 *	Author：julian.chen
 *	Date：2020-07-06
 *	Discription:
 *	
 *	release notes：
 *
 ================================================================*/
//#include "bit.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc ,char *argv[]){
	int wlaninst = 2;
	int MemberPortMask = 0x43;
	int cur_is_brg = MemberPortMask & 1<<(wlaninst+4);
	printf("~cur_is_brg: 0x:%0x\n", ~cur_is_brg);
	MemberPortMask &= (~cur_is_brg) ;
	printf("MemberPortMask: 0x%0x \n", MemberPortMask);


	return 0;
}
