/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：inheritance.cpp
*	Author：julian.chen
*	Date：2019-01-22
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "inheritance.h"
#include <iostream>
using namespace std;

class base
{
public:
	// base();
	// ~base();
 	size_t size() const 
 	{
 		cout << "n:" << n << endl;
 		return n
 	}
protected:
	size_t n;
	
};

//private / protected 继承保护时，除去个别成员。
class derived:private base
{
public:
	// derived();
	// ~derived();
	using base::size; 
protected:
	using base::n;
	
};

struct D1:base //默认为public 继承
{
	
};

class D2:base //默认为private 继承
{
public:
	D2();
	~D2();
	
};


int main(int argc, char const *argv[])
{
	derived drvd;

	return 0;
}
