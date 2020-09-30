/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：array_dimension_2.c
*	Author：julian.chen
*	Date：2019-03-08
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "array_dimension_2.h"
#include <stdio.h>
// #define CONFIG_PUMA_UDMA_SUPPORT y
#define panic_printk printf 
int show_config_mk(void){
	int i;
	char config[][128] = {
#ifdef CONFIG_PUMA_UDMA_SUPPORT
		"CONFIG_PUMA_UDMA_SUPPORT", 
#endif

		"..."
	};
			panic_printk("=================================================\n");
			panic_printk("*********Build Time %s %s*********\n", __DATE__, __TIME__);
			for(i=0; i< sizeof(config)/sizeof(config[0]); i++){
				panic_printk("%s\n", config[i]);
			}	
			panic_printk("=================================================\n");
	return 0;
}

int main(int argc, char const *argv[])
{
		int i = 0;
		char req_mode_str[][64] = {"get", "set", "get_table", "add_table", "del_table"
		};
		printf("%s\n", req_mode_str[0]);
		printf("%s\n", req_mode_str[1]);
		printf("%s\n", req_mode_str[2]);
		printf("%s\n", req_mode_str[3]);
		printf("%s\n", req_mode_str[4]);
		
		for(i=0;i<5;i++){
			printf("%s\n", req_mode_str[i]);
		}


		show_config_mk();

	return 0;
}

