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

struct struct_class
{
	//If the class is defined with the struct keyword , then members defined before
	// the first access label are public 
	int public_element_num;
	int public_element_function()const {return public_element_num;}

	public:
		typedef std::string::size_type index;
		
		int num_read()const {return num;}
		void num_write(int val){num = val;}
		void class_scope();

		index return_scope(); 
		//typedef std::string::size_type index; //error: ‘index’ does not name a type

	private:
		int num;
		double dob;
		index cursor;
		index height, width;

};

int num = 123321;

class constructor
{
	// if the class is defined using the class keyword , then the
	// members are private .
	int private_element_num;
	int private_element_function()const {return private_element_num;}
public:
	constructor(int num, double dob):num(999),dob(9.99),cint(99){
		// this->num = num;
		// this->dob = dob;
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

	//constructors may not be cv-qualified
	// constructor(long flag )const{
	// };

	//error: assignment of read-only member ‘constructor::cint’
	// constructor(int NO_){
	// 	cint = NO_;
	// };
	constructor(int NO_):cint(NO_){
		//explain how to init const member.
	};

	~constructor(){
		//do nothings;
	};

	int num_read()const {return num;}

	int num_global()const {
		return ::num;
		//:: global scope tag.
	}

	//error: assignment of member ‘constructor::num’ in read-only object
	// void num_write(int val)const{num = val;}
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

class init_step
{
	int i;
	int j;
public:
	//run-time errpr: i is initialized befor j.
	init_step(int val):j(val), i(j){	};
	init_step(int val, int reload):j(val), i(val){		};
	~init_step();
	
};
#endif //CONSTRUCTOR_H
