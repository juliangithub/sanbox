/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：07_const.cpp
*	Author：julian.chen
*	Date：2019-01-16
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "07_const.h
#include <iostream>
using namespace std;

class base
{
public:
	base(int i_num, string i_str):num(i_num), str(i_str){

	}
	~base(){}

	void no_const(base &b, int i_num= 666, string i_str = "_sufix")
	{
		b.num =  i_num;
		b.str = i_str;
	}

	void func_const(base &b, int i_num= 777, string i_str = "_const") const
	{
		b.num =  i_num;
		b.str = i_str;
	}

	//const redefine this point type.
	// void func_const_this(base &b, int i_num= 888, string i_str = "_this_const") const
	// {
	// 	this->num =  i_num;
	// 	this->str = i_str;
	// }

	void func_unconst_this(base &b, int i_num= 888, string i_str = "_this_unconst") 
	{
		this->num =  i_num;
		this->str = i_str;
	}

	void set_private_units(long i_long=123321, double i_dbl = 22.333)
	{
		long_num = i_long;
		dobl = i_dbl;
	}

	void show_private_units()
	{
		cout << long_num <<"\t" << dobl << endl;
	}
	
public:
	int num;
	string str;

private:
	long long_num;
	double dobl;
	
};

int main(int argc, char const *argv[])
{
	base bs(11, "base");
	cout << bs.num << bs.str << endl;

	bs.no_const(bs);
	cout << bs.num << bs.str << endl;

	bs.func_const(bs);
	cout << bs.num << bs.str << endl;

	bs.func_unconst_this(bs);
	cout << bs.num << bs.str << endl;

	bs.set_private_units();
	bs.show_private_units();
	return 0;
}
