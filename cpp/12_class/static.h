/*===============================================================
 *	Copyright (C) 2018 All rights reserved.
 *	
 *	Filename：static.h
 *	Author：julian.chen
 *	Date：2018-11-15
 *	Discription:
 *	
 *	release notes：
 *
 ================================================================*/
#ifndef _STATIC_H
#define _STATIC_H
class Foo
{
	public:
		Foo(int id){
			this->id = id;
		}
		Foo(){

		}
		~Foo(){

		}
		int gid(){return id;}
		void sid(int id){
			this->id = id;
		}
	private:
		int id;
};

class Bar
{
	public:
		Bar(){

		}
		~Bar(){

		}
		static int FoVal(){
			// return Bar::Fo.id;//error: ‘int Foo::id’ is private
			return Bar::Fo.gid();
		}

		static int callsFooVal(){
			return Bar::BarNo++;
		}

		static void BarNoVal(int val){
			Bar::BarNo = val;
		}

		static int BarNoVal(){
			return Bar::BarNo ;
		}

	private:
		//static int BarNo = 0;//Error forbids in-class initialization of non-const static member
		
		static int BarNo;//static unit declare 
		static Foo Fo; //static unit declare 
		static const int cst_BarNo = 7; //special static const unit declare &definition .


	

};



#endif //STATIC_H
