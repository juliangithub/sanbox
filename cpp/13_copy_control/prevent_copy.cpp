/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：prevent_copy.cpp
*	Author：julian.chen
*	Date：2019-02-28
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "prevent_copy.h"
#include <iostream>
using namespace std;
class prevent_copy
{
	friend void attempt_copy_func(prevent_copy&);
public:
	prevent_copy(string name):object(name){

	}
	~prevent_copy(){}
	void show_name() {
		cout << "name:" << object <<endl;
	}
private:
	prevent_copy(const prevent_copy&){

	}
	string object;
	
};

int main(int argc, char const *argv[])
{
	prevent_copy obj1("object_1");
	obj1.show_name();

	prevent_copy obj2(obj1);
	//error: ‘prevent_copy::prevent_copy(const prevent_copy&)’ is private
  	//prevent_copy(const prevent_copy&){
	return 0;
}
