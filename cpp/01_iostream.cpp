#include <iostream>
#include <string>
int main()
{
	std::cout << "hello world C++" << std::endl;

	wchar_t wide_char = 'A';
	std::cout << "sizeof wchar_t: "<< sizeof(wide_char) << "\t " << wide_char << std::endl;

	int intval = intval;
	int direct_init(10);
	int copy_init = 11;
	int &ref_cp_init = copy_init;
	std::cout << "intval: " << intval << std::endl;
	std::cout << direct_init << "\t" << copy_init << std::endl;
	ref_cp_init = 121;
	std::cout << ref_cp_init << "\t" << copy_init << std::endl;

	std::string str_cpy = "strcpy1111";
	std::string str_direct("string direct 2222");
	std::string str_rpt(10,'r');
	std::cout << str_cpy << "\t" << str_direct << "\t" << str_rpt << std::endl;

	
	
	int a;
	int b;

	std::cout << "int put  a:"<< std::endl;
	std::cin >> a;

	std::cout << "int put  b:"<< std::endl;
	std::cin >> b;
	std::cout << "a:" << a << "\tb:" << b << "\ta*b:" << a*b << std::endl; 
	

	std::cout << "The sum of " << a ;
	std::cout << "and "<<b;
	std::cout << "is "<< a+b
	<<std::endl;

	const char *p_explicit_const_char = "explicit constant string";
	char *p_implicit_const_char = "implicit constant string";//warning: deprecated conversion from string constant to ‘char*’
	char buf[123] ="string in buffer";
	
	std::cout << "explicit:" << p_explicit_const_char <<std::endl;
	std::cout << "implicit:" << p_implicit_const_char <<std::endl;
	std::cout << "buf:" << buf << std::endl;

}
