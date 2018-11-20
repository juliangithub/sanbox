/*===============================================================
*	Copyright (C) 2018 All rights reserved.
*	
*	Filename：friend.h
*	Author：julian.chen
*	Date：2018-11-19
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _FRIEND_H
#define _FRIEND_H
class screen;
class section;
extern void resize_scr(screen &s, int hgt = 111, int wid= 222);

class screen
{
	friend class window;
	// friend void section::section_resize_scr(screen &s, int hgt, int wid);
	friend void resize_scr(screen &s, int hgt, int wid);
public:


	explicit screen(const std::string &nme=""):name(nme), height(10), width(20){}
	~screen(){}

private:
	std::string name;
	int height;
	int width;

};

// class section
// {
// public:
// 	section(){}
// 	~section(){}
// 	void section_resize_scr(screen &s, int hgt, int wid){
// 		s.height = hgt;
// 		s.width = wid;
// 	}

// };

class window
{
public:
	window(){}
	~window(){}
	void show_position( screen &s){
		cout << "****************************" << endl;
		cout << "height: "<< s.height << endl;
		cout << "width: " << s.width << endl;
		cout << "****************************" << endl;
	}

};






#endif //FRIEND_H
