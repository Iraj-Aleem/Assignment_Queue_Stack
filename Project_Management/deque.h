#ifndef	DEQUE
#define	DEQUE
#include"node.h"
#include <iostream>
//#include <deque>
using namespace std;

struct deque {
public:
    node* head=NULL;
    node* tail=NULL;
    
    void push_front(string task) ;
    void push_back(string task) ;
    void pop_back();
	 void pop_front();
    void print();
      };
#endif
      
