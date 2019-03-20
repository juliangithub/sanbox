/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：message.h
*	Author：julian.chen
*	Date：2019-03-05
*	Discription:
*	
*	release notes：
*
================================================================*/
#ifndef _MESSAGE_H
#define _MESSAGE_H
class message
{
public:
	message(const string &str=""):contents(str){}
	message(const message&);
	message& operator=(const message&);
	~message();
	void remove(Folder&);
	void save(Folder&);
private:
	string contents;
	set<Folder*> folders;
	void put_msg_in_Folders(const set<Folder*>&);
	void remove_msg_from_Folders();

};
   
#endif //MESSAGE_H
