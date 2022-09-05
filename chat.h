#ifndef _CHAT_H
#define _CHAT_H

#include "deque"
#include "string.h"
#include "msg.h"

class ChatBuffer {
	deque<Message> msgs;	
	int maxMsg;
	ChatBuffer() : maxMsg(100) {};
	void display();
};

#endif
