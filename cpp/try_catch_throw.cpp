/*===============================================================
 *	Copyright (C) 2018 All rights reserved.
 *	
 *	Filename：try_catch.cpp
 *	Author：julian.chen
 *	Date：2018-08-08
 *	Discription:
 *	
 *	release notes：
 *
 ================================================================*/
//#include "try_catch.h"
#include<iostream>
//#include<exception>
#include<string>
#include<string.h>
#include<stdexcept>
#include<assert.h>
//using std::cout;
//using std::endl;
using namespace std;

int main(int argc, char*argv[]){

	char* str = argv[1];
//	char buf[8] = {0x0};
	try{
		if( NULL == str)
			throw std::invalid_argument("str NULL");
	}
	catch (std::exception err)
	{
		cout << __FILE__ << __LINE__ << "invalid arg " << err.what() << endl;
	}
	string s;
	while(cin >> s){
		assert(s.size() < 3);
		cout << __FILE__ << " " << __LINE__ << " " << s << endl;
	}
	return 0;
	
}
