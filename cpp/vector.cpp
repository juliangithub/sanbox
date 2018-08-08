#include<iostream>
#include<string>
#include<vector>
#include<bitset>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
//g++ vector.cpp -o vector.d -std=c++11
using std::to_string;
using std::bitset;

int main()
{
	vector<int> v_num(10, 168);
	vector<string> v_str(8,"kkkkk");
	for(vector<string>::size_type idx=0; idx != v_str.size(); idx++)
	{
		cout << "idx:" << idx <<"\t:"<< v_str[idx] <<endl;
		cout << "idx:" << idx <<"\t:"<< v_num[idx] <<endl;
	}
	
	//empty vector
	vector<string> v_str_empt;
	string word("stridx");
	
	for(vector<string>::size_type idx=10; idx != 0 ;idx--)
	{
		v_str_empt.push_back(word + to_string(idx));
	}
	
	for(vector<string>::size_type idx =0;idx != v_str_empt.size();idx++){
		cout << "idx:" << idx <<"\t:"<< v_str_empt[idx]<< endl;	
	}
	string init_str = "101101110";
	bitset<32> vStr32(init_str); 
	/*
	for(int idx = 0; idx != 32 ;idx++)
	{
		cout << "Vstr[" << idx << "]:" << vStr32[idx] << endl;
	}	
	*/
	cout << "vStr: " << vStr32 << endl;
	
	int x[10];
	int *p =x;
	cout << sizeof(x)<< endl;
	cout << sizeof(*x)<<endl;
	cout << sizeof(x)/sizeof(*x)<<endl;
	cout << sizeof(p)<<endl;
	cout << sizeof(*p)<<endl;
	cout << sizeof(p)/sizeof(*p)<<endl;
}
