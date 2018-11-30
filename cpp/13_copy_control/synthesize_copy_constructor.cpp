/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：synthesize_copy_constructor.cpp
*	Author：julian.chen
*	Date：2018-11-30
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <iostream>
using namespace std;

class Sales_item
{
public:
	Sales_item(){};
	Sales_item(const Sales_item& orig);

	//合成赋值操作符
	Sales_item& operator=(const Sales_item& orig)
	{
		isbn = orig.isbn;
		units_sold = orig.units_sold;
		revenue = orig.revenue;
		return *this;
	}
	~Sales_item(){};
private:
	string isbn;
	int units_sold;
	double revenue;
	
};
//synthesize copy constructor.
//合成复制构造函数
Sales_item::Sales_item(const Sales_item& orig):
	isbn(orig.isbn),
	units_sold(orig.units_sold),
	revenue(orig.revenue)
{

}

//复制构造函数
class Foo
{
public:
	Foo();//default constr
	Foo(const Foo&);//copy constructor
	~Foo();
	
};
//禁止拷贝复制构造函数
class uncopy_able
{
public:
	uncopy_able();//default constr
	
	~uncopy_able();
private:
	uncopy_able(const uncopy_able&);//copy constructor
	
};

//赋值操作符重载
class assign
{
public:
	assign();
	assign& operator=(const assign &) ;
	~assign();
	
};

//复制构造函数
class NoName
{
public:
	NoName():pstring(new string), i(0),d(0) {}
	NoName(const NoName& orig):
		pstring(orig.pstring),
		i(orig.i),
		d(orig.d)
		{}
	~NoName(){}
private:
	string *pstring;
	int i;
	double d;
	
};

int main(int argc, char const *argv[])
{
	
	return 0;
}