/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：this.h
*	Author：julian.chen
*	Date：2018-11-21
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _THIS_H
#define _THIS_H

class window
{
public:
	window(int x, int y, int z):name("anonymous"),x(11), y(22), z(33) {

	}
	~window(){}
	window& move(int x, int y, int z){
		this->x = x;
		this->y = y;
		this->z = z;
		return *this;
	}
	window& resize(int x=10, int y=20, int z=30){
		this->x += x;
		this->y += y;
		this->z += z;
		return *this;
	}
	void print(void){
		std::cout << "printTimes:" << printTimes++ <<endl;
		std::cout << "name:" << name <<endl;
		std::cout << "x:" << x <<endl;
		std::cout << "y:" << y <<endl;
		std::cout << "z:" << z <<endl;
	}
	

private:
	static int printTimes ;
	std::string name;
	int x;
	int y;
	int z;
	
};
   
#endif //THIS_H
