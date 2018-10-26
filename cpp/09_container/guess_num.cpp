#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> num = {11, 22, 33, 44, 55, 66, 77};
	vector<int>::iterator begin = num.begin();
	vector<int>::iterator end = num.end();
	vector<int>::iterator iter = num.begin();
	int input_num;
	while(1){
		cout<< "input num: " <<endl;
		cin >> input_num;
		//initcial iter
		iter  = begin;
		while (iter != end )
		{
			
			if (input_num == *iter)
			{
				cout << "find num: " << input_num << endl;
				exit(0);
			}
			else{
				cout << "no match iter: " << *iter <<endl;
			}
			iter++;
		}
	if(iter == end && input_num != *iter)
	{
		cout << "not found num " << endl;
	}
}
	
	return 0;
}