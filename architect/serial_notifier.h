/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：serial_notifier.h
*	Author：julian.chen
*	Date：2019-05-09
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _SERIAL_NOTIFIER_H
#define _SERIAL_NOTIFIER_H
#include "notifier.h"
extern int  register_serial_notifier(struct notifier_block *nb);
extern void  unregister_serial_notifier(struct notifier_block *nb);
extern int call_serial_notifiers(unsigned long val, void *data);
#endif //SERIAL_NOTIFIER_H
