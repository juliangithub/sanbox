/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：printf_fmt.c
*	Author：julian.chen
*	Date：2019-02-25
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "printf_fmt.h"
#include <stdio.h>

enum{
	SK_LOG_NULL = 0,
	SK_LOG_ERROR,
	SK_LOG_INFO,
	SK_LOG_DEBUG,
	SK_LOG_TRACE
};

#define SK_LOG_LEVEL SK_LOG_TRACE

#define SK_ERROR(msg...)  \
    if(SK_LOG_LEVEL >= SK_LOG_ERROR){ \
        printf("\033[1;31m[SK_ERROR:%s %d]",__FUNCTION__,__LINE__);\
        printf (msg); \
        printf("\033[0m\n");\
    }

#define SK_INFO(msg...)  \
    if(SK_LOG_LEVEL >= SK_LOG_INFO){\
        printf("\033[1;36m[SK_INFO]");\
        printf (msg); \
        printf("\033[0m\n");\
    }

#define SK_DEBUG(msg...) \
    if(SK_LOG_LEVEL >= SK_LOG_DEBUG){ \
        printf("\033[1;33m[SK_DEBUG:%s %d]",__FUNCTION__,__LINE__);\
        printf (msg); \
        printf("\033[0m\n");\
    }

#define SK_TRACE() \
    if(SK_LOG_LEVEL >= SK_LOG_TRACE){ \
        printf("\033[1;35m[SK_TRACE:%s %d]\033[0m\n",__FUNCTION__,__LINE__);\
    }

int call_back(void){

	printf("call_back\n");
	return 0;
}
int main(int argc, char const *argv[])
{

	SK_TRACE();
	SK_DEBUG("__debug__");
	SK_INFO("__info__");
	SK_ERROR("__error__");
	SK_ERROR("%s %s", __DATE__, __TIME__);


	int num = 10241024;
	char buf[32]={0x0};
	static int s_num = 123123;
	unsigned int num_unit = 10241024;
	long l_num = 223344;
	unsigned long int ul_num = 112233;
	long long ll_num = 334455;
	unsigned long long ull_num = 99887766;

	printf("long %%ld %ld\n", l_num);
	printf("unsigned long %%lu %lu\n", ul_num);
	printf("long long %%lld %lld\n", ll_num);
	printf("unsigned long long %%llu %llu\n", ull_num);
	printf("%u\n", num_unit);
	printf("%#4x\n", num);
	printf("%#4.4x\n", num);
	printf("%#2.2x\n", num);
	//printf("%#d\n", num);
	printf("%#o\n", num);
	printf("addr num:%p\n", &num);
	printf("addr s_num:%p\n", &s_num);
	printf("addr buf %p\n", buf);

	int (*p_cb)(void);
	p_cb = call_back;
	printf("call_back : %p\n", p_cb);



	return 0;
}
