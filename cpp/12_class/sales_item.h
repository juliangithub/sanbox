/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：sales_item.h
*	Author：julian.chen
*	Date：2018-11-14
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _SALES_ITEM_H
#define _SALES_ITEM_H
  class sales_item
  {
  public:
  	sales_item():units_sold(0), renenue(0.0) {};
  	sales_item(const std::string&);
  	sales_item(const string &book):isbn(book), units_sold(0), renenue(0.0);
	sales_item(std::istream&);

	sales_item(const std::string &book = ""):isbn(book), units_sold(0), renenue(0.0){};
  	// sales_item() const ; //error cannot be const function.
  	~sales_item();

  private:
  	std::string isbn;
  	unsigned units_sold;
  	double	revenue;
  	
  };
   
#endif //SALES_ITEM_H
