/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：insert.cpp
*	Author：julian.chen
*	Date：2018-10-25
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
	int i_array[] = {100, 200, 300, 400, 500, 600, 700};
	list<int> ilist;
	ilist.insert(ilist.begin(), 111);
	ilist.insert(ilist.end(), 2, 222);
	list<int>::iterator iter = ilist.begin();
	ilist.insert(++iter, i_array+2, i_array+4);

	for (list<int>::iterator i = ilist.begin(); i != ilist.end(); ++i)
	{
		cout << *i << endl;
	}
	return 0;
}