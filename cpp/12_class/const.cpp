/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：const.cpp
*	Author：julian.chen
*	Date：2018-11-12
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "const.h"
#include <iostream>
using namespace std;

class screen
{
public:
	 screen(string str){
	 	name = str;
	 }
	// ~screen();
	screen& display(){
		cout << "noconst display  name: " <<name<<endl;
		// do_display(); 
		this->name += " ___can modify members which this point to,cannot change value of this point.";
		cout << "noconst display  name: " <<name<<endl;
		 return *this;
	}
	// screen& display()const	//error: binding ‘const screen’ to reference of type ‘screen&’ discards qualifiers
	// const screen& display()		//error: ‘const screen& screen::display()’ cannot be overloaded
	const screen& display() const
	{
		cout << "const display  !!!\t name: " << name <<endl;
		// do_display();
		return *this;
	}
	
	screen& set(string  str){
		name = str;
		return *this;
	}

private:
	string  name;
	void do_display()const{
		cout << "do_display" <<endl;
	}
};

int main(int argc, char const *argv[])
{
	const char cststr[] = " const string";
	char str1[] = " string1";
	char str2[] = " string2";
	char *const p_cst = str1;
	const char *const  p_ccst = cststr;
	
	cout << "p_cst: " << p_cst << endl;
	cout << "p_ccst: " << p_ccst << endl;
	//error: p_cst's addr is const ,read only.
	// error: assignment of read-only variable ‘p_cst’
	// p_cst = str2;

	*p_cst = 'O';

	cout << "p_cst: " << p_cst << endl;

	//error: assignment of read-only variable ‘p_ccst’
	 // p_ccst = str2;

//assignment of read-only location ‘*(const char*)p_ccst’
	 // *p_ccst = 'C';

	 screen nocst_scr("no const string");
	 nocst_scr.display();
	 nocst_scr.set("noconst updated name").display();

	 const screen cst_scr("const string");
	 cst_scr.display();

	 
	return 0;
}