/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：friend.cpp
*	Author：julian.chen
*	Date：2018-11-19
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <iostream>
using namespace std;

#include "friend.h"


int main(int argc, char const *argv[])
{
	screen scre("scr1");
	window win;
	win.show_position(scre);

	// section sec;
	// sec.section_resize_scr(scre, 12, 23);
	// win.show_position(scre);

	resize_scr(scre);
	win.show_position(scre);
	return 0;
}


void resize_scr(screen &s, int hgt, int wid)
{

	s.height = hgt;
	s.width = wid;
}