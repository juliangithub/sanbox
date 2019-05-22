/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：AssignmentOperator.cpp
*	Author：julian.chen
*	Date：2019-03-01
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "AssignmentOperator.h"
#include <iostream.h>
using namespace std;
class sales_item
{
public:
	sales_item();
	~sales_item();
	//the assignment operator for Sales_item might be declared as
	sales_item& operator= (const sales_item&);

private:
	string isbn;
	int units_sold;
	double revenue;

};

	//The Synthesized Assignment Operator
sales_item& sales_item::operator=(const sales_item& rhs)
{
		isbn = rhs.isbn;
		units_sold = rhs.units_sold;
		revenue = rhs.revenue;
		return *this;
}

int main(int argc, char const *argv[])
{

	return 0;
}
