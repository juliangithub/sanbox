/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：netmask_fmt.c
*	Author：julian.chen
*	Date：2018-11-06
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "netmask_fmt.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[])
{
        int i ;
        unsigned  int bin_mask;
        int blen = 0;
        if(argc < 2){

                return -1;
        }
        blen = atoi (argv[1]);
        if(blen > 31 || blen < 1){
                return -1;
        }
        for(i=31, bin_mask=0; blen > 0;i--, blen--){
                bin_mask |= (1 << i);
        }
        printf("%x , %d \n", bin_mask, i); 
        printf("%x\n", bin_mask); 
        return 0;
}