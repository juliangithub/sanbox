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


#include<iostream>
//#include<exception>
#include<string>
#include<string.h>
#include<stdexcept>
#include<assert.h>
//using std::cout;
//using std::endl;
using namespace std;
int main()
{
	//declare type
	string s1;
	string s2(s1);
	string s3("string3");
	string s4(4, '4');

	string str1 = "stringA";
	string str2(str1);
	if(str1  == str2 )
	{
		cout << str1 << " == " << str2 << endl;
	}
	
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

	return 0;
}
