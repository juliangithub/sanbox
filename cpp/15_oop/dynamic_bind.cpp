/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：dynamic_bind.cpp
*	Author：julian.chen
*	Date：2019-01-10
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "dynamic_bind.h"
#include <iostream>
using namespace std;

class item_base
{
public:
	item_base(const std::string book = "", double sales_price = 0.0):
	isbn(book), price(sales_price){}

	std::string book(){return isbn;}
	
	virtual double net_price(std::size_t n)const{
		return n * price;
	}
	virtual ~item_base(){}

private:
	std::string isbn;
protected:
	double price;
};


class Bulk_item : public item_base
{
public:
	Bulk_item();
	~Bulk_item();
	double net_price(std:: size_t)const ;

private:
	std::size_t min_qty;
	double discount;
};

void Bulk_item::memfcn(const Bulk_item &d , const item_base &b){
	double ret = price; // OK : uses this->price
	ret = d.price;		//OK : 使用派生类对象应用访问基类protect成员
	//ret = b.price;		//error: 基类对象不能访问基类包含的protect成员
}
double Bulk_item::net_price(std::size_t cnt)const{
	if(cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
};


/*Using a Derived class as a base class*/

class Base
{
public:
	Base();
	~Base();
	
};

class D1 : public Base
{
public:
	D1();
	~D1();
	
};

class D2 : public D1
{
public:
	D2();
	~D2();
	
};

int main(int argc, char const *argv[])
{

	return 0;
}