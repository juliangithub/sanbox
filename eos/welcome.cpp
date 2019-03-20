/*===============================================================
 *	Copyright (C) 2018 All rights reserved.
 *	
 *	Filename：welcome.cpp
 *	Author：julian.chen
 *	Date：2018-11-08
 *	Discription:
 *	
 *	release notes：
 *
 ================================================================*/
//#include "welcome.h"
#include <eosiolib/eosio.hpp>  
#include <eosiolib/print.hpp>

using namespace eosio;  

class welcome : public eosio::contract {  
	public:  
		using contract::contract;  

		void say(account_name user) {  
			print("Welcome to EOS! ", name{user});  
		}  
};  

EOSIO_ABI(welcome, (say))
