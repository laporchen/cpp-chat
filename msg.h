#ifndef _MSG_H
#define _MSG_H
#include "ctime"
#include "string.h"
class Message {
	string from;
	string msg;
	time_t sendTime;
	Message() = default;
	Message(string &author,string &content, time_t &sTime) : from(author),msg(content),sendTime(sTime) {};
}

#endif
