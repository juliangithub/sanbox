/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：copy_constructor.cpp
*	Author：julian.chen
*	Date：2018-11-23
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "copy_constructor.h"

#include <iostream>
#include<vector>
using namespace std;

string mystrcat(const string& str1, const string str2){

	return str1+ "-"+str2;
}

int main(int argc, char const *argv[])
{
	string str1 = "9.999999"; //copy init
	string str11("1.1111111111111");//direct init
	string str2(22,'2'); //direct init
	string str3 = str1; //copy init;
	string str4(str2);//direct init

	cout << mystrcat(str1, str2) << endl;

	std::vector<string> vstr (10);
	std::vector<string> vstr_cp_init{"11", "22", "33"};
	
	for(vector<string>::size_type idx=0; idx != vstr.size(); idx++)
	{
		cout << "idx:" << idx <<"\t:"<< vstr                [idx] <<endl;
	}


	for(vector<string>::size_type idx=0; idx != vstr_cp_init.size(); idx++)
	{
		cout << "idx:" << idx <<"\t:"<< vstr_cp_init[idx] <<endl;
	}

	return 0;
}

