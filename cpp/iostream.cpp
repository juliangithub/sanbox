#include <iostream>
#include <string>
int main()
{
	std::cout << "hello world C++" << std::endl;
	int a;
	int b;
	char *str = "constant string";
	char buf[123] ="string in buffer";
	int intval = intval;
	int direct_init(10);
	int copy_init = 11;
	int &ref_cp_init = copy_init;
	
	std::cout << "intval: " << intval << std::endl;
	std::string str_cpy = "strcpy1111";
	std::string str_direct("string direct 2222");
	std::string str_rpt(10,'r');

	std::cout << str_cpy << "\t" << str_direct << "\t" << str_rpt << std::endl;

	std::cout << direct_init << "\t" << copy_init << std::endl;
	
	ref_cp_init = 121;
	std::cout << ref_cp_init << "\t" << copy_init << std::endl;

	std::cout << "int put  a:"<< std::endl;
	std::cin >> a;

	std::cout << "int put  b:"<< std::endl;
	std::cin >> b;
	std::cout << "a:" << a << "\tb:" << b << "\ta*b:" << a*b << std::endl; 
	std::cout << "point:" << str <<std::endl;
	std::cout << "buf:" << buf << std::endl;

	std::cout << "The sum of " << a ;
	std::cout << "and "<<b;
	std::cout << "is "<< a+b
	<<std::endl;
}
