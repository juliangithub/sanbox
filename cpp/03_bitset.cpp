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

	cout<< "b1"<<endl<< b1 <<endl;
	cout<< "b2"<<endl<< b2 <<endl;
	cout<< "b3"<<endl<< b3 <<endl;
	cout<< "b4"<<endl<< b4 <<endl;

	
	string bstr = "1000000010000100101110"; 
	bitset<32> bv(bstr);
	cout << "bv: " << endl << bv <<endl;
	
	bv.flip(0);
	cout << "fliped reverses bit 0 bv: " << endl << bv <<endl;

	bv[0].flip();
	cout << "fliped reverses bit 0 again bv: " << endl << bv <<endl;

	int bit = 2;
	bv.flip(bit);
	cout << "bv fliped reverses bit " << bit << endl << bv <<endl;

	bv.flip();
	cout << "fliped all bits bv: " <<endl<< bv <<endl;

	bitset<32> binit;
	for(int idx=0 ; idx != bv.size(); idx++)
	{
		if(bv.test(idx))
			binit.set(idx);
	}
	cout<<"==========================="<<endl;
	cout << "bv: " <<endl<< bv<< endl;
	cout << "binit: " <<endl<< binit<< endl;
	cout<<"==========================="<<endl;

	bitset<32> bu;
	bu.set();//set all bit to 1;
	cout << "set bu: " << bu<< endl;
	bu.reset(); //set all bits to 0;
	cout << "reset bu: " << bu<< endl;

	int num[7]={1,2,3,5,8,13,21};
	cout << sizeof(num) <<endl;
	for(int idx=0; idx < 7; idx++){
		cout << "num: " << num[idx]<< endl;
		bu.set(num[idx]);
	}
	cout << "bu: " << bu<< endl;
}
