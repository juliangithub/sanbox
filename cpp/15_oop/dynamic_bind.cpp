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

/*Using a Derived class as a base class*/

// class Base
// {
// public:
// 	Base();
// 	~Base();
	
// };

// class D1 : public Base
// {
// public:
// 	D1();
// 	~D1();
	
// };

// class D2 : public D1
// {
// public:
// 	D2();
// 	~D2();
	
// };

static int counter ;
class item_base
{
public:
	item_base(const std::string book = "", double sales_price = 0.0):
		isbn(book), price(sales_price){
		cout << "base constructor ......" << counter++ <<"\tbook:"<< book <<"\tprice:"<< price << endl;
	}

	std::string book()const { return isbn; }
	
	virtual double net_price(std::size_t n)const{
		//cout << "item_base " <<__func__<<endl;
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
	// Bulk_item(size_t mqty=10, double dic=0.5):min_qty(mqty), discount(dic)
	// {
	// 	cout << "Bulk_item constructor " <<endl;
	// 	item_base("Bulk_item", 8.8);//Error base construct been called twice.
	// }
#ifdef EMPTY_CONSTRUCTER
	Bulk_item(){}
#endif
	Bulk_item(size_t mqty=10, double dic=0.5):item_base("Bulk_item", 8.8)
	{
		cout << "Bulk_item constructor " <<endl;
		min_qty = mqty;
		discount = dic;
	}
	


	//一个类只能初始化自己的直接基类.C ->B B->A   错误：C->A  

#if 1
	Bulk_item(string book = "", double sales_price = 0.0, size_t mqty=10, double dic=0.5)
		:item_base(book, sales_price), min_qty(mqty), discount(dic)
	{
		cout << "overLoad Bulk_item constructor work in init paramlist" <<endl;
	}
#else
	Bulk_item(string book = "", double sales_price = 0.0, size_t mqty=10, double dic=0.5)
		:item_base(book, sales_price)
	{
		cout << "overLoad Bulk_item constructor " <<endl;
		min_qty = mqty;
		discount = dic;
	}
#endif
	// ~Bulk_item(){}

	double net_price(std:: size_t)const ;
	void memfcn(const Bulk_item &d , const item_base &b);
private:
	std::size_t min_qty;
	double discount;
};

void Bulk_item::memfcn(const Bulk_item &d , const item_base &b){
	double ret = price; // OK : uses this->price
	ret = d.price;		//OK : 使用派生类对象应用访问基类protect成员
	//ret = b.price;		//error: 基类对象不能访问基类包含的protect成员
	cout << "ret: " << ret <<endl;
}

double Bulk_item::net_price(std::size_t cnt)const{
	// cout << "Bulk_item " <<__func__<<endl;
	if(cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}



void print_total(item_base &item, size_t n){
	cout<<item.book()
	<< "\t num:" << n 
	<< "\t price:"<<item.net_price(n) <<endl;
}

int main(int argc, char const *argv[])
{
	item_base base("base book ", 1.1);
	Bulk_item derived (20, 0.2);
	Bulk_item derived_main ("main Bulk_item ", 1.5, 20, 0.15);

#ifdef EMPTY_CONSTRUCTER
	Bulk_item derived ;
	print_total(derived, 10);	
#endif
	print_total(base, 10);

	print_total(derived, 10);
	print_total(derived_main, 10);


	item_base * basep = &derived;
	//强制调用基类的net_price方法
	double prc = basep->item_base::net_price(33);
	cout << "prc:" << prc << endl;
	return 0;
}