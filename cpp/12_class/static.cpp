/*===============================================================
 *	Copyright (C) 2018 All rights reserved.
 *	
 *	Filename：static.cpp
 *	Author：julian.chen
 *	Date：2018-11-15
 *	Discription:
 *	
 *	release notes：
 *
 ================================================================*/
#include <iostream>
#include "static.h"

using namespace std;

int Bar::BarNo=7; //static unit definition 
Foo Bar::Fo(7878);//static unit definition 
//static data unit must be called by static public funtion .
int main(int argc, char const *argv[])
{

	cout << Bar::BarNoVal() <<endl;
	Bar::BarNoVal(88);
	cout << Bar::BarNoVal() <<endl;
	cout << Bar::FooVal()<<endl;

	cout << Bar::callsFooVal()<<endl;
	cout << Bar::callsFooVal()<<endl;
	cout << Bar::callsFooVal()<<endl;
	cout << Bar::callsFooVal()<<endl;
	return 0;
}

//  void Bar::init_BarNo(int val){
// 	BarNo = val;
// }
