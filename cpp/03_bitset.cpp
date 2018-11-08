#include<iostream>
#include<bitset>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::bitset;
using std::string;
int main()
{

	//bitset  declare type
	bitset<8> b1;
	unsigned long u = 0x555;
	bitset<64> b2(u);

	string s("11110000111000110010");
	bitset<64> b3(s);

	bitset<32> b4(s, 4, 6);

	cout<< b1 <<endl;
	cout<< b2 <<endl;
	cout<< b3 <<endl;
	cout<< b4 <<endl;

	int num[7]={1,2,3,5,8,13,21};
	string bstr = "1000000010000100101110"; 
	bitset<32> bv(bstr);
	cout << "bv: " << bv <<endl;
	
	//bv.flip();
	//cout << "fliped bv: " << bv <<endl;

	bitset<32> binit;
	for(int idx=0 ; idx != bv.size(); idx++)
	{
		if(bv.test(idx))
			binit.set(idx);
	}
	cout << "bu: " << binit<< endl;
	bitset<32> bu;
	//bu.set(bv);	
	cout << sizeof(num) <<endl;
	for(int idx=0; idx < 7; idx++){
		cout << "num: " << num[idx]<< endl;
		bu.set(num[idx]);
	}
	cout << "bu: " << bu<< endl;
}
