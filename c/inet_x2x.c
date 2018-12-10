/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：inet_x2x.c
*	Author：julian.chen
*	Date：2018-12-10
*	Discription:
*	
*	release notes：
*
================================================================*/


#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
   struct in_addr addr;

   if (argc != 2) {
       fprintf(stderr, "%s <dotted-address>\n", argv[0]);
       exit(EXIT_FAILURE);
   }

   if (inet_aton(argv[1], &addr) == 0) {
       fprintf(stderr, "Invalid address\n");
       exit(EXIT_FAILURE);
   }
   
   printf("%x\n", addr);
   unsigned char *Byte = (unsigned char*)&addr;
   printf("%x.%x.%x.%x\n", *Byte, *(Byte+1), *(Byte+2), *(Byte+3));

   printf("%s\n", inet_ntoa(addr));
   exit(EXIT_SUCCESS);
}