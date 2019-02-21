/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：constructor.cpp
*	Author：julian.chen
*	Date：2018-08-28
*	Discription:
*	
*	release notes：
*
================================================================*/
#include<iostream>
using namespace std ;

#include "constructor.h"




int main(int argc, char const *argv[])
{
	constructor* con1  = new constructor(11, 11.11);
	con1->dump();
	cout << "num read "<< con1->num_read()<<endl;
	con1->num_write(1111);
	cout << "num read "<< con1->num_read()<<endl;

	cout << "num_globald "<< con1->num_global()<<endl;
	
	//con1->stack_pram();
	cout << "*******************************" << endl;
	con1->dump1();
	cout << "*******************************" << endl;

	constructor con2(22, 22.22);
	con2.dump();
	constructor con9;
	con9.dump();

	struct_class obj_struct;
	obj_struct.class_scope();
	return 0;
}
// inline declared in the class declaration; no need to repeat on definition.
void constructor :: dump() const {
	//call stack_pram compile faild.
	 // stack_pram(); // error: passing ‘const constructor’ as ‘this’ argument discards qualifiers [-fpermissive]
	cout << &num << ":" << num << endl;
	cout << &dob << ":" << dob << endl;
	return ;
}

void constructor :: dump1() {
	stack_pram();
	cout << &num << ":" << num << endl;
	cout << &dob << ":" << dob << endl;
	return ;
}

void constructor:: stack_pram() {
	int stk;
	cout << &stk<< ":" << stk << endl;
	cout << __FILE__ << __LINE__ <<endl;
}

void struct_class::class_scope(){
	index index_scope = 123;
	cout << "index_scope:" << index_scope <<endl;
}

struct_class::index struct_class::return_scope(){
	index index_scope = 456;
	cout << __func__ << index_scope <<endl;
	return index_scope;
}