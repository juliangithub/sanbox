/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：function.cpp
*	Author：julian.chen
*	Date：2018-08-20
*	Discription:
*	
*	release notes：
*
================================================================*/
//#include "function.h"
#include<iostream>
#include<stdio.h>
//#include "stdafx.h"
#include "stdlib.h"
#include<iomanip>  
#include<bitset>
#include<math.h>
using namespace std;

int my_pow(int a, int b)
{
	return pow(a,b);
}

void printf_horizontal(int width, string str)
{
	int w;
	for(w=0; w<width; w++)
	{
		cout << str ;
	}
	
}

void draw_triangle(int height , int width=10 )
{
	int h;
	int w;
	printf_horizontal(1, "|\\");
	cout << endl;
	for(h=0, w=1; h<height; h++, w++){
		cout << "|";
		printf_horizontal(w, " ");
		cout << "\\" << endl;
	}
	printf_horizontal(width, "-");
	cout << endl;
}
#if 0
void draw_retangle(int height = 5, int width = 5)
#else
void draw_retangle(int height = 5, int width = 5);
void draw_retangle(int height , int width )
#endif
{
	int h;
	printf_horizontal(width, "-");
	cout << endl;
	for(h=0; h<height; h++){
		cout << "|";
		printf_horizontal(width-2, " ");
		cout << "|" << endl;
	}
	printf_horizontal(width, "-");
	cout << endl;
}


int main(int argc, char*argv[])
{
	
	
	int sizen = sizeof(int);
	cout <<"sizen:" << sizen << endl;
	int num = 2;
	int num1 = -2;
	//unsigned char * p = NULL;
	const int bits = 31;
	cout <<dec << num << endl;
	cout <<oct << num << endl;
	cout << "num hex:" << hex << num << endl;
	
	cout <<dec << num1 << endl;
	cout << "num1 hex:" << hex << num1 << endl;
	
	cout << "num1 bin:" << (bitset<bits>)num1 << endl;
	cout << "num  bin:" << (bitset<bits>)num << endl;
	/*
	p = &num;
	cout << "bin:" << bin << *p << endl;
	cout << "bin:" << bin << *p+1 << endl;
	cout << "bin:" << bin << *p+2 << endl;
	cout << "bin:" << bin << *p+3 << endl;
	*/
	int ret = my_pow(2,5);
	cout << dec << "ret: " << ret <<endl;

	draw_retangle();
	//draw_retangle(20);
	//draw_retangle(20, 30);
	//draw_retangle(60, 40);

	draw_triangle(10);
}
