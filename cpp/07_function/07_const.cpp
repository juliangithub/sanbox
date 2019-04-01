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

	void no_const(base &b, int i_num= 666, string i_str = "no_const")
	{
		b.num =  i_num;
		b.str = i_str;
	}

	void func_const(base &b, int i_num= 777, string i_str = "func_const") const
	{
		b.num =  i_num;
		b.str = i_str;
	}

	// //const成员函数，this指向的成员为read-only
	// void func_const_this(base &b, string i_str = "_this_const", int i_num= 888) const
	// {
	// 	this->num =  i_num;// error: assignment of member ‘base::num’ in read-only object
	// 	this->str = i_str;//error: passing ‘const string {aka const std::__cxx11::basic_string<char>}’ as ‘this’ argument discards qualifiers [-fpermissive]
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

#if 0
//const declare in the other file.
extern int counter;
//extern const int buf_size_local_file;//Error //undefined reference to `buf_size_local_file'
extern const int buf_size_extern_const;
#endif

int main(int argc, char const *argv[])
{

	const int buf_size = 512;
	//buf_size = 64;	//error: assignment of read-only variable
	const std::string hi = "hello";// const string
	//const int i, j=0; //uninitialized const ‘i’ 

	const double pi = 3.1415;
	//double *ppi = &pi; //error: invalid conversion from ‘const double*’ to ‘double*’ [-fpermissive]
	const double *p_cpi = &pi;

	// void *p_vd_pi = &pi;//error: invalid conversion from ‘const void*’ to ‘void*’ [-fpermissive]
	const void *p_vd_cpi = &pi;
	
#if 0
	cout << "counter:" << ++counter << endl;
	//cout << "buf_size_local_file:" << buf_size_local_file << endl;
	cout << "buf_size_extern_const:" << buf_size_extern_const << endl;
#endif

	const int val = 123321;
	const int &const_refval = val;
	//int &ref_val = val;//error: binding ‘const int’ to reference of type ‘int&’ discards qualifiers

	base bs(11, "base");
	cout << bs.num << bs.str << endl;

	bs.no_const(bs);
	cout << bs.num << bs.str << endl;

	bs.func_const(bs);
	cout << bs.num << bs.str << endl;

	// bs.func_const_this(bs, "bs_call_const_this_func", 787);
	// cout << bs.num << "\t" << bs.str << endl;

	const base const_bs(22, "const_base");
	// const_bs.func_const_this(const_bs);
	cout << const_bs.num << const_bs.str << endl;

	bs.func_unconst_this(bs);
	cout << bs.num << bs.str << endl;

	bs.set_private_units();
	bs.show_private_units();
	return 0;
}
