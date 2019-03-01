/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：sk_buf.c
*	Author：julian.chen
*	Date：2019-02-25
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "sk_buf.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
	printk("start tcp_mark_push() ..................\n");
 
    if (skb)
        {
                 char *buf = skb->data;
                 int len = skb->len;
                 int i;
     
                 printk("[%s:%d]Packet length = %#4x\n", __FUNCTION__, __LINE__, len);
                 for (i = 0; i < len; i++){
                         if (i % 16 == 0) printk("%#4.4x", i);
                         if (i % 2 == 0) printk(" ");
                         printk("%2.2x", ((unsigned char *)buf)[i]);
                        if (i % 16 == 15) printk("\n");
                 }
                 printk("\n\n\n\n");
         }

	return 0;
}
