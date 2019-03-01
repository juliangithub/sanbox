/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：explicit.cpp
*	Author：julian.chen
*	Date：2018-11-14
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <iostream>
#include "explicit.h"
using namespace std;
int main(int argc, char const *argv[])
{
	string null_book = "9-999-9999-9";
	sales_item stem(null_book);
	
	#ifndef EXPLICIT
	if (stem.same_isbn(null_book))
	{
		cout << "same_isbn true" << endl;
	}
	else
	{
		cout << "same_isbn false" << endl;
	}
	#else
	if (stem.same_isbn(sales_item(null_book)))
	{
		cout << "same_isbn true" << endl;
	}
	else
	{
		cout << "same_isbn false" << endl;
	}
	#endif
	return 0;
}