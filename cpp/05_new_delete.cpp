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
	int num;
	int *p_int = &num;
	//delete p_int; //delete stack resource.


	string str(10,'9');
	string *pstr = new string(10, '9');
	
	cout << "str: " << str<< endl;
	cout << "pstr: " << *pstr<< endl;
	//delete(str); //error delete stack resource.
	delete(pstr);
	

	return 0;
}
