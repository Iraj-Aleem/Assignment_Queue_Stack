#include<iostream>
using	namespace	std;
#include"stack.h"

void	stack::push(){
	node	*temp;
	temp=new	node();
	string	pushed_item;
	cout<<"Enter	Data"<<endl;
	cin>>pushed_item;
	temp->info=pushed_item;
	temp->link=top;
	temp=top;
}
void	stack::pop(){
	node	*temp=NULL;
	if(top==NULL){
		cout<<"Stack	is	empty"<<endl;
	}
	else{
		temp=top;
		cout<<"Popped	item	is:"<<temp->info<<endl;
		top=top->link;
		delete(temp);	
	}
}
