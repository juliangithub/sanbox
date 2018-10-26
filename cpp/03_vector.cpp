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
	cout<< "*******char vector********" << endl;
	std::vector<char> vc_none;
	cout << vc_none.size() << endl;
	cout << vc_none.empty() <<endl;
	
	std::vector<char> v_uninit(10);
	std::vector<char> vc1(1, '1');
	std::vector<char> vc2(vc1);
	std::vector<char> vc22 = vc1;
	std::vector<char> vc3{'3','C'};
	
	cout << vc1[0] <<endl;
	cout << vc2[0] <<endl;
	cout << vc22[0] <<endl;
	cout << vc3[1] <<endl;
	
	
	for(vector<int>::size_type idx=0; idx != vc3.size(); idx++)
	{
		cout << "idx:" << idx <<"\t:"<< vc3[idx] <<endl;
	}
	
	cout<< "******int vector*********" << endl;
	std::vector<int> vi1(10);
	std::vector<int> vi2(10, 5);
	std::vector<int> vi3(vi2);
	std::vector<int> vi4{11,22,33};

	cout << vi1[2] <<endl;
	cout << vi2[3] <<endl;
	cout << vi3[4] <<endl;
	cout << vi4[2] <<endl;

	for(vector<int>::size_type idx=0; idx != vi4.size(); idx++)
	{
		cout << "idx:" << idx <<"\t:"<< vi4[idx] <<endl;
	}

	cout<< "******string vector*********" << endl;
	std::vector<string> v3;
	std::vector<string> v4(v3);
	std::vector<string> v7{"str7"};
	cout << "v7 size: "<< v7.size() <<endl;
	vector<string> v_str(3,"kkkkk");
	for(vector<string>::size_type idx=0; idx != v_str.size(); idx++)
	{
		cout << "idx:" << idx <<"\t:"<< v_str[idx] <<endl;
	}
	
	cout << "==============push_back==============" <<endl;
	//empty vector
	vector<string> v_str_empt;
	string word("stridx");
	for(vector<string>::size_type idx=5; idx != 0 ;idx--)
	{
		v_str_empt.push_back(word + to_string(idx));
	}
	cout << "v_str_empt.size() " << v_str_empt.size() <<endl;

	for(vector<string>::size_type idx =0;idx != v_str_empt.size();idx++){
		cout << "idx:" << idx <<"\t:"<< v_str_empt[idx]<< endl;	
	}
	cout << "==============bitset==============" <<endl;
	string init_str = "101101110";
	bitset<32> vStr32(init_str); 
	
	for(int idx = 0; idx != 32 ;idx++)
	{
		cout << "Vstr[" << idx << "]:" << vStr32[idx] << endl;
	}	
	
	cout << "vStr: " << vStr32 << endl;
	
	cout << "==============sizeof==============" <<endl;
	int x[10];
	int *p =x;
	cout << sizeof(x)<< endl;
	cout << sizeof(*x)<<endl;
	cout << sizeof(x)/sizeof(*x)<<endl;
	cout << sizeof(p)<<endl;
	cout << sizeof(*p)<<endl;
	cout << sizeof(p)/sizeof(*p)<<endl;
}
