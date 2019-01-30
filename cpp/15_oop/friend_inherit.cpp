/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：friend_inherit.cpp
*	Author：julian.chen
*	Date：2019-01-22
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "friend_inherit.h"
#include <iostream>
using namespace std;
class base
{
public:
	// base();
	// ~base();
	friend class Frnd;
protected:
	int i;
	
};

class D1 :public base
{
public:
	// D1();
	// ~D1();

protected: 
	int j;
	
};

class Frnd
{
public:
	// Frnd();
	// ~Frnd();
	int mem(base b) {return b.i}	//OK Frnd is friend to base.
	int mem(D1 d){return d.i}		//Error friendship is not inherit
	
};

class F1 :public Frnd
{
public:
	// F1();
	// ~F1();
	int mem(base b){return b.i}		//Error friendship is not  inherit 
};

int main(int argc, char const *argv[])
{
	
	return 0;
}
