/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：09_container.cpp
*	Author：julian
*	Date：2018-10-16
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "09_container.h"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int ia[]={0,1,2,3,4,5,6,7,8};
	string sa[6] = {"aa", "bb", "cc", "dd", "ee", "ff"};
	vector<string> v_str(sa, sa+6);
	list<int> v_ilist(ia+4, ia+6);
	vector<int> v_int(ia, ia+8);
	list<string> v_slist(sa+6, sa);

	vector<int> v0 (5,6);
	vector<int> v1(v0);
	//vector<int> v2(v0+2, v0+4);
	vector<int> v3(8);
	return 0;
}