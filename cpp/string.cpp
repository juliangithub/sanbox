/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：string.cpp
*	Author：julian.chen
*	Date：2018-08-17
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "string.h"
#include<iostream>
#include<assert.h>

using namespace std;

int main()
{
	size_t n;
	string s;
	string prefix = "prefix_";
	while(cin >> s)
	{
		assert(s.size() < 10);
		n = s.size();
		cout << "size" << s.size() << endl;
		cout << "is empty" << s.empty()<<endl;
		cout << "n " << s[n] << endl;
		prefix += s;
		//cout << " + " << prefix + s << endl;
		cout << " + " << prefix << endl;
		prefix = s;
		cout << " = " << prefix << endl; 
	}
}
