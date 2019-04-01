/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：07_const_global.cpp
*	Author：julian.chen
*	Date：2019-02-13
*	Discription:
*	
*	release notes：
*
================================================================*/
// #include "07_const_global.h"
//compile cmd.

 // g++ -c 07_const.cpp 
 // g++ -c 07_const_global.cpp 
 // g++ 07_const.o 07_const_global.o -o const.d

int counter = 11;
const int buf_size_local_file = 22;
extern const int buf_size_extern_const = 33;
