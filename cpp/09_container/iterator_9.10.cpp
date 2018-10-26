#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
/*	const vector<int> ivec(10);
	vector<int>::iterator it1 = ivec.begin();*/

/*	vector<string> svec(10);
	vector<string>::iterator it2 = &svec[0];*/


/*	list<int> ilist(10);
	list<int>::iterator it3 = ilist.begin() + 2 ;
	
*/
	
	
	/*
	for (vector<string>::iterator idx = ivec.begin(); idx != 0; idx++)
	{
	
	}
	*/

int ia[7] = {11, 22, 33, 44, 55, 66, 77};
string sa[7] = {"aa", "bb", "cc", "dd", "ee", "ff"};

vector<int> ivec(ia ,ia+6);
vector<int> ivec2(ia+2 ,ia+4);

vector<string> svec(sa, sa+5);
list<int> ilist(ia+4, ia+6);
/*list<string> slist (sa +5, sa);*/
list<string> slist(sa, sa +5);

vector< vector<int> > i_vvec = {ivec, ivec2};

	for (vector<int>::iterator idx = ivec.begin(); idx != ivec.end(); idx++)
	{
		cout << *idx <<endl;
	}

	for (vector<string>::iterator idx = svec.begin(); idx != svec.end(); idx++)
	{
		cout << *idx <<endl;
	}

	for (list<int>::iterator idx = ilist.begin(); idx != ilist.end(); idx++)
	{
		cout << *idx <<endl;
	}

	for (list<string>::iterator i = slist.begin(); i != slist.end(); ++i)
	{
		cout << *i << endl;
	}
	return 0;
}

