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
	string argv2 = argv[2];
//	char buf[8] = {0x0};
	try{
		if( NULL == str)
			throw std::invalid_argument("str NULL");

		if(strlen(str) > 16)
			throw std::range_error("length  > max 16");

		if(strlen(str) < 4)
			throw std::underflow_error("length < underflow 4");
		if(strlen(str) > 8 )
			throw std::overflow_error("length > overflow 8");

		if(argv2.size() < 2 )
			throw logic_error("argv[2] length is 0");
	}
	// catch (std::exception err)
	// {
	// 	cout << __FILE__ << __LINE__ << "invalid arg " << err.what() << endl;
	// }
	catch(std::invalid_argument err)
	{
		cout << __FILE__ << __LINE__ << "invalid arg: ==> " << err.what() << endl;	
	}
	catch(std::range_error err)
	{
		cout << __FILE__ << __LINE__ << "range_error: ==> " << err.what() << endl;	
	}
	catch(std::underflow_error err)
	{
		cout << __FILE__ << __LINE__ << "underflow_error: ==> " << err.what() << endl;	
	}
	catch(std::overflow_error err)
	{
		cout << __FILE__ << __LINE__ << "overflow_error: ==> " << err.what() << endl;	
	}
	catch(std::logic_error err)
	{
		cout << __FILE__ << __LINE__ << "logic_error: ==> " << err.what() << endl;	
	}

	string s;
	while(cin >> s){
		assert(s.size() < 3);
		cout << __FILE__ << " " << __LINE__ << " " << s << endl;
	}
	return 0;
	
}
