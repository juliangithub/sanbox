/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：const.cpp
*	Author：julian.chen
*	Date：2018-11-12
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "const.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	const char cststr[] = " const string";
	char str1[] = " string1";
	char str2[] = " string2";
	char *const p_cst = str1;
	const char *const  p_ccst = cststr;

	cout << "p_cst: " << p_cst << endl;
	cout << "p_ccst: " << p_ccst << endl;
	//error: p_cst's addr is const ,read only.
	// error: assignment of read-only variable ‘p_cst’
	// p_cst = str2;

	*p_cst = 'O';

	cout << "p_cst: " << p_cst << endl;

	//error: assignment of read-only variable ‘p_ccst’
	 // p_ccst = str2;
//assignment of read-only location ‘*(const char*)p_ccst’
	 *p_ccst = 'C';

	return 0;
}