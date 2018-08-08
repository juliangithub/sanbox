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
int p_swap(int *& a, int *&b){
	int *p_tmp = a;
	a = b;
	b = p_tmp;
}
int main(){
	int i = 22;
	int j = 33;
	int *pi = &i;
	int *pj = &j;
	cout << "addr: "<< pi <<" value: "<< *pi << endl;
	cout << "addr: "<< pj <<" value: "<< *pj << endl;
	p_swap(pi,pj);
	cout << "after swap " <<endl;
	
	cout << "addr: "<< pi <<" value: "<< *pi << endl;
	cout << "addr: "<< pj <<" value: "<< *pj << endl;

}
