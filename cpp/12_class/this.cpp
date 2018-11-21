/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：this.cpp
*	Author：julian.chen
*	Date：2018-11-21
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <iostream>
using namespace std;
#include "this.h"
int window::printTimes = 1;

int main(int argc, char const *argv[])
{
	window win(1, 2, 3);
	win.print();
	win.move(123, 234, 345).print();
	win.resize(100, 200).print();
	win.resize().print();
	return 0;
}


