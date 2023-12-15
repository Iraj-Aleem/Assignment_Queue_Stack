
#ifndef queue_h
#define queue_h
#include"node.h"
#include<iostream>

using namespace std;

struct queue{
	node *front=NULL;
	node *rear=NULL;
	
	void insert(string);
	void del();
	void display();
	
};
#endif
