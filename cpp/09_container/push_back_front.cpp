#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> ivec ;
	int input;
	for (int i = 0; i < 5; ++i)
	{
		cout << "input NUM " << i <<endl;
		cin >> input;
		ivec.push_back(input);
	}
/*	for (int i = 0; i < 5; ++i)
	{
		cin >> i;
		ivec.push_front(i);
	}
*/
	cout << "=============vector============" <<endl;
	for (vector<int>::size_type  i = 0; i < ivec.size(); ++i)
	{

		cout << ivec[i] <<endl;
	}
	cout << endl <<endl <<endl;

	list<int> ilist;
	for (int i = 0; i < 5; ++i)
	{
		cout << "push_back input NUM " << i <<endl;
		cin >> input;
		ilist.push_back(input);
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << "push_front input NUM " << i <<endl;
		cin >> input;
		ilist.push_front(input);
	}

	// list 没有重载[],incorrect eg.
/*	for (list<int>::size_type i = 0; i < ilist.size(); ++i)
	{
		cout << ilist[i]<< endl;
	}
*/
	cout << "=============list============" <<endl;
	for (list<int>::iterator i = ilist.begin(); i != ilist.end(); ++i)
	{
		
		cout << *i<< endl;
	}
	cout << endl <<endl <<endl;

	deque<string> sdeque;
	string str;
	for (int i = 0; i < 5; ++i)
	{
		cout << "deque push_back intput string " << i << endl;
		cin >> str;
		sdeque.push_back(str);
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << "deque push_front intput string " << i << endl;
		cin >> str;
		sdeque.push_front(str);
	}

	cout << "============================deque=================" <<endl;
	for (deque<string>::iterator i = sdeque.begin(); i != sdeque.end(); ++i)
	{
		cout << *i <<endl;
	}
	cout << endl << endl << endl;
	return 0;
}