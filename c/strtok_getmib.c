/*===============================================================
*	Copyright (C) 2020 All rights reserved.
*	
*	Filename：string_fmt.c
*	Author：julian.chen
*	Date：2020-02-27
*	Discription:
*	
*	release notes：
*
================================================================*/
// root@intel_ce_linux:~# iwpriv wlan0 get_mib acladdr
// wlan0     get_mib:160  137  228  17  34  51  160  137  228  34  51  68  160  137  228  51  68  85  0  0  0  0  0  0  
// root@intel_ce_linux:~# 
// root@intel_ce_linux:~# iwpriv wlan0 set_mib aclnum=3
// root@intel_ce_linux:~# iwpriv wlan0 get_mib acladdr 
// wlan0     get_mib:160  137  228  17  34  51  160  137  228  34  51  68  160  137  228  51  68  85  

// root@intel_ce_linux:~# iwpriv wlan0 get_mib ssid
// wlan0     get_mib:80  117  109  97  54  95  53  71  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  

// root@intel_ce_linux:~# iwpriv wlan0 set_mib passphrase=abcdefghijklmn
// root@intel_ce_linux:~# iwpriv wlan0 get_mib passphrase               
// wlan0     get_mib:97  98  99  100  101  102  103  104  105  106  107  108  109  110  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0 

// #include "string_fmt.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define RETURN_OK 0
#define RETURN_ERR -1

typedef enum { MIB_NUM=0, MIB_STR=1 } MIB_TYPE_T;
struct wl_obj
{
    int type;                   
    int value_int;
    char *value_str;
    int (*str_fmt_cb) (char *dst, const char *src);
};

int main(int argc, char const *argv[])
{

    struct wl_obj object = {
        .type = MIB_STR,
    };

    printf("%p\n", object.str_fmt_cb);
	// char buf[128]="wlan0     get_mib:160  137  228  17  34  51  160  137  228  34  51  68  160  137  228  51  68  85  ";
    // char buf[128]= "wlan0     get_mib:85  83  69  82  95  48  50  50  57  48  65  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0";
    char buf[128]= "wlan0     get_mib:80  117  109  97  54  95  53  71  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0 ";

	char *needle = NULL;

    char dst_str[256] = {0x0};
    // unsigned char   dot11AclAddr[128][6] = {{0x0}};

	needle = strstr(buf,"get_mib:");
	if (NULL == needle)
	{
		return RETURN_ERR;
	}
	needle += strlen("get_mib:");

//sscanf(needle, "%d  %d  %d  %d  %d  %d  ", &dot11AclAddr[1][0], &dot11AclAddr[1][1], &dot11AclAddr[1][2], &dot11AclAddr[1][3], &dot11AclAddr[1][4], &dot11AclAddr[1][5]);

// int i = 1;
// printf("Append MAC ACL entry[%d]: %02x:%02x:%02x:%02x:%02x:%02x\n",i,
// dot11AclAddr[i][0],
// dot11AclAddr[i][1],
// dot11AclAddr[i][2],
// dot11AclAddr[i][3],
// dot11AclAddr[i][4],
// dot11AclAddr[i][5]);

// printf("%x\n%x\n%x\n%x\n%x\n%x\n",
// &dot11AclAddr[0][0],
// &dot11AclAddr[0][1],
// &dot11AclAddr[0][2],
// &dot11AclAddr[0][3],
// &dot11AclAddr[0][4],
// &dot11AclAddr[0][5]);

// printf("%x\n%x\n%x\n%x\n%x\n%x\n",
// &dot11AclAddr[1][0],
// &dot11AclAddr[1][1],
// &dot11AclAddr[1][2],
// &dot11AclAddr[1][3],
// &dot11AclAddr[1][4],
// &dot11AclAddr[1][5]);

    // int *p_int[8] = {0x0};
    // printf("%zu\n", sizeof(p_int));
    // printf("%p -- %p\n", &p_int[0], &p_int[1]);
    char *kv[1024]={0x0};
    int i;
    int j = 0;
    
    kv[0] = strtok(needle, "  ");
    for(i = 1;i < 1024;i++)
    {
        kv[i] = strtok(NULL, "  ");
        if (kv[i] == NULL)
        break;
    }
    // printf("sizeof: %zu\n", sizeof(kv));
    char *p = &dst_str[0];
    // char *p = (char*)&dot11AclAddr[0][0];
    while(j < i)
    {
        printf("memAddr: %p kv[%d]:  %s <==> %02x\n",  kv[j], j,kv[j], atoi(kv[j]));
        *p = atoi(kv[j]);
        j++;
        p++;
    }

    printf("========================================\n");
    printf("dst_str: %s\n", dst_str);
    // printf("i: %d\n", i);
    // j = 0;
    // while(j < i/6)
    // {
        
    //     printf("j:%d \t %2x:%2x:%2x:%2x:%2x:%2x\n", j,
    //     dot11AclAddr[j][0],
    //     dot11AclAddr[j][1],
    //     dot11AclAddr[j][2],
    //     dot11AclAddr[j][3],
    //     dot11AclAddr[j][4],    
    //     dot11AclAddr[j][5]);
    //     j++;
    // }


    // int k = 0 ;

    // while(k<i){
    //     // printf("%02x:", *p);
    //     printf("%c:", *p);
    //     if (k+1/6)
    //     {
    //         printf("\n");
    //     }
    //     k++;
    //     p++;
    // }
    

	return 0;
}
