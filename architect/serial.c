/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：serial.c
*	Author：julian.chen
*	Date：2019-05-05
*	Discription:
*	
*	release notes：
*
================================================================*/
#include "serial_notifier.h"
/*
 *	Our notifier list
 */

int main(int argc, char const *argv[])
{
    int err;
    int cycle = 0;
    char line_no[32]={0x0};
    while(++cycle>0 ){
        if(cycle % 7 == 0){
            printf("%d \n", cycle++);
            snprintf(line_no, sizeof(line_no), "%s %d", __FILE__, __LINE__);
            call_serial_notifiers(cycle, (void*)line_no);
        }
        sleep(2);
    }
    // if((err= pthread_mutex_lock()))
    return 0;
}
