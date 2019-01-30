/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：static_inherit.cpp
*	Author：julian.chen
*	Date：2019-01-22
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "static_inherit.h"
#include <iostream>
using namespace std;

struct base
{
	static void statmem(); //default public inherit.
};

struct derived : base
{
	void f(const drvd&);
};

void derived :: f (const derived &drvd){
	base::statmem();		//OK base defines statemem
	derived::statmem();		//OK inherits statemem
	drvd.statmem();			//OK access through derived object
	statmem();				//OK access through this class.
}

int main(int argc, char const *argv[])
{
	
	return 0;
}
