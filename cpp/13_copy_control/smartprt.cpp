/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：smartprt.cpp
*	Author：julian.chen
*	Date：2018-12-10
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "smartprt.h"
#include <iostream>

using namespace std;
class U_ptr
{
private:
	friend class hasptr;
	U_ptr(int *p):ip(p), use(1){}
	~U_ptr(){
		delete ip;
	}

	int *ip;
	size_t use;
	
};

class hasptr
{
public:
	int *get_ptr()const {
		return ptr->ip;
	}
	int get_val()const{
		return val;
	}

	void set_ptr(int *p){
		ptr->ip =p;
	}
	void set_val(int i){
		val = i;
	}

	int get_ptr_val()const{
		return *(ptr->ip);
	}
	void set_ptr_val(int i){
		*(ptr->ip) = i;
	}

	hasptr(int *p, int i):ptr(new U_ptr(p)), val(i){}
	hasptr(const hasptr &orig):ptr(orig.ptr), val(orig.val){ ++ptr->use;}
	hasptr& operator=(const hasptr&);
	~hasptr(){
		if(--ptr->use == 0) delete ptr;
	};
private:
	U_ptr *ptr;
	int  val;
};

hasptr& hasptr::operator=(const hasptr& orig){
	++orig.ptr->use;
	if(--ptr->use == 0)
		delete ptr;
	ptr = orig.ptr;
	val = orig.val;
	return *this;
}

int main(int argc, char const *argv[])
{
	int ipaddr = ntohl(192<<24 | 168 << 16 | 88 << 8 | 254 << 0);
	int *ip = new int;
	*ip = ipaddr;	
	//int ip =0xc0a858fe;
	hasptr ist(ip, 255);
	cout << ip << endl;
	return 0;
}
