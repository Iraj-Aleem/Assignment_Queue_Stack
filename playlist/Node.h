#ifndef	NODE_H
#define	NODE_H
#include<iostream>
using	namespace	std;

struct Node {
public:
    int data;
    Node* prev=NULL;
    Node* next=NULL;
    
};
#endif
