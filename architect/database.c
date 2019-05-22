/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：database.c
*	Author：julian.chen
*	Date：2019-05-05
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "database.h"
#include "notifier.h"
#include "serial_notifier.h"

static int database_serial_notify(struct notifier_block *self,
				    unsigned long action, void *hcpu)
{
	int cpu = (long)hcpu;
    printf("notify action:%lu \n", action);
	switch (action) {
	case CPU_ONLINE:
	case CPU_ONLINE_FROZEN:
		break;
	default:
		break;
	}
	return NOTIFY_OK;
}

static struct notifier_block  database_serial_notifier = {
	.notifier_call	= database_serial_notify,
};


int main(int argc, char const *argv[])
{
	int cycle = 0;
    register_serial_notifier(&database_serial_notifier);
	
    while(1){
		printf("%d \n", cycle++);
        sleep(2);
    }
    return 0;
}
