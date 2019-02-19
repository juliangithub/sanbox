/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：mutable.cpp
*	Author：julian.chen
*	Date：2018-11-14
*	Discription:
*	
*	release notes：
*
================================================================*/
#include <iostream>
using namespace std;


class screen
{
public:
	screen();
	~screen();
	const screen& show(int k = 121, int l = 323) const {
		cout << "============= const function ============= " <<endl;

		cout << "k:" << k <<endl;
		cout << "l:" << l <<endl;

		cout << "x:" << x <<endl;
		cout << "y:" << y <<endl;
		// ro += 1234;//screen::ro’ in read-only object // mutable 
		cout << "ro:" << ro <<endl;
		cout << "rw:" << ++rw << endl; 
		cout << endl;
		cout << "============= const function ============= " <<endl <<endl;
		return *this;
	}

	 screen& show(int h = 11)
	{
		cout << "============= unconst function ============= " <<endl;
		cout << "ro:" << ro <<endl;
		ro += h;
		cout << "ro:" << ro <<endl;
		cout << "h:" << h <<endl;\
		x += h;
		y += h;
		z += h;
		cout << "x:" << x <<endl;
		cout << "y:" << y <<endl;
		cout << "z:" << z <<endl<<endl;
		cout << "============= unconst function =============" <<endl <<endl;
		return *this;
	}
private:
	int x;
	int y;
	int z;
	int ro;
	mutable int rw;
};

screen:: screen():x(1), y(2), z(3), ro(60000), rw(80000){
 
}
screen::~screen(){

}

int main(int argc, char const *argv[])
{
	screen sc1;
	const screen sc2 ;
	sc1.show();
	sc1.show(121);
	sc1.show(888, 999); //unconst object can call const function.

	sc2.show();
	//rw add
	sc2.show();
	//sc2.show(111, 222); //const object call unconst function Error.
	return 0;
}