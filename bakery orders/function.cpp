#include"queue.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

node *rear=NULL;
node *front=NULL;

void queue::insert(string data){
	node *temp=new node();
	temp->info=data;
	temp->link=NULL;
	if(front==NULL){
		front=temp;
	}else{
		rear->link=temp;
	}
	rear=temp;
	cout<<" order inserted\n";
}

void queue::del(){
	node *temp=new node();
	if(front==NULL){
		cout<<"  Underflow\n";
	}else{
		temp=front;
		front=front->link;
		delete(temp);
		cout<<"  deleted\n";
	}
}

void queue::display(){
	node *temp=front;
    if(front==NULL){
        cout<<" NO order found\n";
    }
    else{
        while(temp!=NULL){
            cout<<temp->info<<".\n";
            temp=temp->link;
        }
        cout<<endl;
    }
}
