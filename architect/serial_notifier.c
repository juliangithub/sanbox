/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：serial_notifier.c
*	Author：julian.chen
*	Date：2019-05-09
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "serial_notifier.h"
#include "notifier.h"
static RAW_NOTIFIER_HEAD(serial_chain);

// static pthread_mutex_t serial_lock;
/* Need to know about serial data gather status /down?  */
int  register_serial_notifier(struct notifier_block *nb)
{
	int ret;
	// mutex_lock(&serial_add_remove_lock);
    // pthread_mutex_lock(&serial_lock);
    dlog_info("notifier_block nb: 0x%x  serial_chain: 0x%x\n", (void* )nb, (void *)&serial_chain);
	ret = raw_notifier_chain_register(&serial_chain, nb);
	// mutex_unlock(&serial_add_remove_lock);
    // pthread_mutex_unlock(&serial_lock);
	return ret; 
}

void  unregister_serial_notifier(struct notifier_block *nb)
{
	// cpu_maps_update_begin();
	raw_notifier_chain_unregister(&serial_chain, nb);
	// cpu_maps_update_done();
}

int call_serial_notifiers(unsigned long val, void *data)
{
    dlog_info("serial_chain: 0x%x\n",  (void *)&serial_chain);
	return raw_notifier_call_chain(&serial_chain, val, data);
}