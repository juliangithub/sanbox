/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：com.c
*	Author：julian.chen
*	Date：2018-08-14
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "com.h"
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdarg.h>

#define	ETH_DATA_LEN	1500
typedef struct PPPoETagStruct {
    unsigned int type:16;	/* tag type */
    unsigned int length:16;	/* Length of payload */
    unsigned char payload[ETH_DATA_LEN]; /* A LOT of room to spare */
} PPPoETag;


void creat_payload(unsigned char* payload, unsigned int len)
{
	int rd[3] = {0x0};
#if 0
	struct timeval basetime;
	gettimeofday(&basetime,0);
	srand(basetime.tv_sec+basetime.tv_usec);
#else
	pid_t pid = getpid();
	srand(pid);
#endif
	rd[0] = rand();
	rd[1] = rand();
	rd[2] = rand();
	
	memcpy((void*)payload, (void*)&rd,len);
}

void print_buf(unsigned char *buf, unsigned int len)
{
	int i = 0;
	for(i=0; i<len; i++)
	{
		printf("%02x  ", *(buf+i));
		
	}
	printf("\n");
}


int demo( char *msg, ... ) 
{ 

va_list argp; 
int argno = 0; 
char *para; 

va_start( argp, msg ); 
while (1) 
   { 
    para = va_arg( argp, char); 
       if ( strcmp( para, "") == 0 ) 
           break; 
       printf("Parameter #%d is: %s\n", argno, para); 
       argno++; 
} 
va_end( argp ); 

return 0; 
}


int main(){
	//PPPoETag hostUniq;
	//printf("addr type %0x\n", (void*)&hostUniq);
	
#if 0
	unsigned char new_challenge[256]={0x0};
	unsigned char uniq[12]={0x0};
	struct timeval basetime;
	gettimeofday(&basetime,0);
	printf("random in sec= %lu; usec= %lu!\n", basetime.tv_sec, basetime.tv_usec);
	srand(basetime.tv_sec+basetime.tv_usec);
	snprintf(new_challenge, sizeof(new_challenge), "%x%x%x%x", rand(), rand(), rand(), rand());
	
	printf("new_challenge %s\n", new_challenge);
	
	//snprintf(new_challenge, sizeof(new_challenge), "%x", rand());
	//printf("new_challenge %s\n", new_challenge);
	
	memcpy((void*)&uniq, (void*)&new_challenge,sizeof(uniq));
	
	printf("uniq %s\n", uniq);
#endif
	unsigned char payload[12]={0x0};
	creat_payload(payload, sizeof(payload));
	print_buf(payload, sizeof(payload));
	printf("------------------------------\n");
	creat_payload(payload, sizeof(payload));
	print_buf(payload, sizeof(payload));
	printf("------------------------------\n");
	creat_payload(payload, sizeof(payload));
	print_buf(payload, sizeof(payload));
	printf("------------------------------\n");
	creat_payload(payload, sizeof(payload));
	print_buf(payload, sizeof(payload));
	printf("------------------------------\n");
	//printf("size: %zu payload %s\n", sizeof(payload), payload);


	int i=1 ;
	printf(" %s %d %d \t %d \n", __FILE__, __LINE__, i--, i++);



	demo("DEMO", "This", "is", "a", "demo!", "  "); 


}
