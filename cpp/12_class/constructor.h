/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：constructor.h
*	Author：julian.chen
*	Date：2018-08-28
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _CONSTRUCTOR_H
#define _CONSTRUCTOR_H

class constructor
{
public:
	constructor():num(121),dob(3.2){};

	~constructor();

	int num_read(){return num;}
	void num_write(int val){num = val;}
	double dob_read(){return dob;}
	void dob_write(double val){dob = val;}
private:
	int num;
	double dob;
	
};
   
#endif //CONSTRUCTOR_H
