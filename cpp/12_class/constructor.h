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
	constructor(int num, double dob):num(999),dob(9.99),cint(99){
		this->num = num;
		this->dob = dob;
	};

	// constructor(int num, double dob, int cit):num(888),dob(8.88),cint(8){
	// 	cint = cit;//Wrong .
	// };
		//const element initial example .right !
	constructor(int num, double dob, int cit):num(777),dob(7.77),cint(cit){

	};

	constructor(int num, double dob, char init_flag):num(777),dob(7.77),cint(num){

	};

	constructor(void):num(666),dob(6.66),cint(6){

	};
	~constructor(){
		//do nothings;
	};

	int num_read(){return num;}
	void num_write(int val){num = val;}
	double dob_read(){return dob;}
	void dob_write(double val){dob = val;}
	void stack_pram(void);
	inline void dump() const;
	void dump1();
private:
	//initial value set by constructor initial param list.
	int num;
	double dob;
	const int cint;
	
};
   
#endif //CONSTRUCTOR_H
