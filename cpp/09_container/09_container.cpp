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
//g++ vector.cpp -o vector.d -std=c++11
int main(int argc, char const *argv[])
{
//顺序容器
//vector 支持快速随机访问
//list  支持快速插入、删除
//deque  双端队列

//顺序容器适配器
//stack 		LIFO
//queue 		FIFO
//priority_queue	QOS queue

	int ia[]={0,1,2,3,4,5,6,7,8};
	string sa[6] = {"aa", "bb", "cc", "dd", "ee", "ff"};
	//vector
	vector<int> v_int(ia, ia+8);
	vector<int> v0 (5,6);
	vector<int> v1(v0);
	vector<int> v2(ia+1, ia+4);
	vector<int> v3(8);
	
	cout << v2.size() << endl;
	cout << v2[0] << endl;
	cout << v2[1] << endl;	
	
	//list
	//list initcial directly.
	list<int> v_ilist(ia+4, ia+6);
	list<string> v_slist(sa, sa+2);

	
	//const list size_type
	const list<int>::size_type list_size=64;
	list<string> l_size(list_size, "emmm");


	//deque
	//deque enum
	deque<int> dint{ 11, 22, 33, 44};
	list<int> cp_dint(dint.begin(), dint.end());

	list<int>::iterator l_iter = cp_dint.end();

	while(l_iter != cp_dint.begin())
	{
		cout << "*l_iter: " << *l_iter << endl;
		l_iter--;
	}
	cout << "*l_iter: " << *l_iter << endl;

	cout << dint.size() <<endl;
	cout << cp_dint.size() <<endl;

	vector<string> v_str(sa, sa+4);
	cout << v_str[3] << endl;
	vector<string>::iterator mid = v_str.begin() + v_str.size() /2;
	list<string> l_head(v_str.begin(), mid);
	deque<string> d_bottom(mid, v_str.end());

	//
	//迭代器运算 + - > < >= <=  只适用于vector/deque 两种容器。
	//== ！= 适用于所有容器类型。
	#if 0
	list <int> l_uninit;
	list <int>::iterator itrt1 = l_uninit.begin();
	list <int>::iterator itrt2 = l_uninit.end();
	while(itrt1 < itrt2){
		int i;
		cout << i++ <<endl; 
	}
	#endif

	
	return 0;
}