/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：hasptr.cpp
*	Author：julian.chen
*	Date：2018-12-05
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <iostream>
using namespace std;

class hasptr
{
public:
	hasptr(int *p, int i):ptr(p), val(i){

	}

	int *get_ptr() const {
		return ptr;
	}
	int get_val() const {
		return val;
	}

	void set_ptr(int *p){
		ptr = p;
	}
	void set_val(int i){
		val = i;
	}

	int get_ptr_val() const{
		return *ptr;
	}
	void set_ptr_val(int i)const {
		*ptr = i;
	}
	~hasptr(){}
private:
	int *ptr;
	int val;
	
};
int main(int argc, char const *argv[])
{
	int num = 88;
	hasptr obj(&num, 66);
	hasptr obj2(obj);

	cout << "obj val:" << obj.get_val() <<endl;
	cout << "obj ptr:" << *(obj.get_ptr()) <<endl;
	

	cout << "obj2 val:" << obj2.get_val() <<endl;
	cout << "obj2 ptr:" << *(obj2.get_ptr()) <<endl;

	obj.set_val(11);
	cout << "obj val:" << obj.get_val() <<endl;
	cout << "obj2 val:" << obj2.get_val() <<endl;

	// int num2 = 22;
	// obj.set_ptr(&num2);
	// cout << "obj ptr:" << *(obj.get_ptr()) <<endl;
	// cout << "obj2 ptr:" << *(obj2.get_ptr()) <<endl;

	int num3 = 33;
	obj.set_ptr_val(num3);
	cout << "obj ptr:" << obj.get_ptr_val() <<endl;
	cout << "obj2 ptr:" << obj2.get_ptr_val() <<endl;


	return 0;
}
