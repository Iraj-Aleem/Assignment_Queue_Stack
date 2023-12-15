#ifndef	DEQUE_H
#define	DEQUE_H
#include"Node.h"
#include<iostream>
using	namespace	std;

struct Deque {
public:
    Node* front= NULL;
    Node* rear= NULL;
    void insertFront(int data);
    void insertRear(int data);
    void removeFront();
    void removeRear();
    void shuffle() ;
    void swap(int i, int j);
    Node* getNode(int index);
    int getSize();
    void print() ;
    
};
#endif
