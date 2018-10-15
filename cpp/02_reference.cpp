/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：reference.cpp
*	Author：julian.chen
*	Date：2018-08-08
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "reference.h"
#include<iostream>
using std::cout;
using std::endl;

void point_ref_swap(int *& a, int *&b){
	int *p_tmp = a;
	a = b;
	b = p_tmp;
}

void ref_swap(int &a, int&b){
	
	a=a+b;
	b=a-b;
	a=a-b;

}

int main(){
	int i = 22;
	int j = 33;
	int *pi = &i;
	int *pj = &j;

	cout << "i: " << i <<endl;
	cout << "j: " << j <<endl;
	ref_swap(i, j);
	cout << "ref_swap i: " << i <<endl;
	cout << "ref_swap j: " << j <<endl;

	cout << "addr: "<< pi <<" value: "<< *pi << endl;
	cout << "addr: "<< pj <<" value: "<< *pj << endl;
	point_ref_swap(pi,pj);
	cout << "after swap " <<endl;
	
	cout << "addr: "<< pi <<" value: "<< *pi << endl;
	cout << "addr: "<< pj <<" value: "<< *pj << endl;

}
