/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：explicit.h
*	Author：julian.chen
*	Date：2018-11-19
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _EXPLICIT_H
#define _EXPLICIT_H
#define EXPLICIT

class sales_item
{
public:
	
#ifndef EXPLICIT
	sales_item(const std::string &book = ""):
		isbn(book),units_sold(0),revenue(0.0){}
	sales_item(std::istream &is);
#else
	explicit sales_item(const std::string &book = ""):
		isbn(book),units_sold(0),revenue(0.0){}
	explicit sales_item(std::istream &is);

#endif

	~sales_item(){}

	bool same_isbn(const sales_item &item){
		return isbn == item.isbn;
	}


private:
	std::string isbn;
	unsigned units_sold;
	double	revenue;
};

#endif //EXPLICIT_H
