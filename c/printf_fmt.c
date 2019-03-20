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

int main(int argc, char const *argv[])
{

	SK_TRACE();
	SK_DEBUG("11111111111111111111");
	SK_INFO("11111111111111111111");
	SK_ERROR("11111111111111111111");


	int num = 10241024;
	unsigned int num_unit = 10241024;
	printf("%u\n", num_unit);
	printf("%#4x\n", num);
	printf("%#4.4x\n", num);
	printf("%#2.2x\n", num);
	//printf("%#d\n", num);
	printf("%#o\n", num);





	return 0;
}