/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：stream.cpp
*	Author：julian.chen
*	Date：2018-09-14
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "stream.h"
#include<iostream>
using namespace std;

//ofstream & print(ofstream&) //function declare, stream reference.
int main(int argc, char const *argv[])
{
	int ival;
	while(cin >> ival, !cin.eof())
	{
		if (cin.bad())
		{
			throw runtime_error("IO stream corrupted");

		}
		if (cin.fail())
		{
			cerr << "bad data , try again !";
			cin.clear(istream::failbit);
			continue;
		}
	}
	return 0;
}