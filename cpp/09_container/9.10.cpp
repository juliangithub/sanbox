#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
	const vector<int> ivec(10);
	vector<string> svec(10);
	list<int> ilist(10);

	vector<int>::iterator it1 = ivec.begin();
	vector<string>::iterator it2 = &svec[0];
	list<int>::iterator it3 = ilist.begin() + 2 ;
	for (vector<string>::iterator idx = ivec.begin(); idx != 0; idx++)
	{
		/* code */
	}
	return 0;
}