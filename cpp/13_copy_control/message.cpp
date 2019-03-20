/*===============================================================
*	Copyright (C) 2019 All rights reserved.
*	
*	Filename：message.cpp
*	Author：julian.chen
*	Date：2019-03-05
*	Discription:
*	
*	release notes：
*
================================================================*/

#include <iostream>
using namespace std;
#include "message.h"
message::message(const message&)
	:contents(message.contents), folders(message.folders)
{
	put_msg_in_folders(folders);
}

void message:: put_msg_in_folders(const set<Folders*> &rhs){
	for (set<Folders*>::const_interator beg = rhs.begin(); beg != rhs.end(); ++beg)
	{
		(*beg)->addMsg(this);
	}
}

message& message::operator=(const message& rhs){
	if(&rhs != this){
		remove_msg_from_Folders();
		contents = rhs.contents;
		folders = rhs.folders;
		put_msg_in_folders(rhs.folders);
	}
}

void message:: remove_msg_from_Folders(){
	for (std::vector<Folders*>::const_iterator beg = folders.begin();  
		beg!= folders.end(); ++beg)
	{
		(*beg)->regMsg(this);
	}
}

message::~message(){
	remove_msg_from_Folders();
}

int main(int argc, char const *argv[])
{
	
	return 0;
}