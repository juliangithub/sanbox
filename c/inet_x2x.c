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

static union { char c[4]; unsigned long l; }endian_test = { { 'l', '?', '?', 'b' } };
#define ENDIANNESS ((char)endian_test.l)

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
   
   printf("addr:%x :  %x\n", &addr, addr);
   unsigned char *Byte = (unsigned char*)&addr;
   	printf("%x  :  %x\n", Byte, *Byte);
   	printf("%x  :  %x\n", Byte+1, *(Byte+1));
   	printf("%x  :  %x\n", Byte+2, *(Byte+2));
   	printf("%x  :  %x\n", Byte+3, *(Byte+3));

   printf("%s\n", inet_ntoa(addr));

	struct in_addr ipaddr;
    ipaddr.s_addr = 192<<24 | 168 << 16 | 88 << 8 | 254 << 0;
   printf("%s\n", inet_ntoa(ipaddr));
   	
	ipaddr.s_addr = ntohl(192<<24 | 168 << 16 | 88 << 8 | 254 << 0);
   printf("%s\n", inet_ntoa(ipaddr));

   	unsigned int num = 0xc0a858fe;
   	unsigned char* chr = (unsigned char*)&num;
   	printf("%x  :  %x\n", chr, *chr);
   	printf("%x  :  %x\n", chr+1, *(chr+1));
   	printf("%x  :  %x\n", chr+2, *(chr+2));
   	printf("%x  :  %x\n", chr+3, *(chr+3));


	printf("%c\n", ENDIANNESS);

   exit(EXIT_SUCCESS);
}