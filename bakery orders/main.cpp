#include"queue.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	queue q;
	string s;
	int ch;
	while(true){
		cout<<"\n ======================\n\tBakery Orders\n======================\n";
		cout<<" 0. exit\n 1. insert order\n 2. display orders\n 3. delete order\n Enter choice : ";cin>>ch;
		cout<<"\n ======================\n\n";
		
		switch(ch){
			case 0:
				exit(1);
			case 1:
				cout<<" enter text : ";
				cin>>ws;getline(cin,s);
				q.insert(s);	
				break;
			case 2:
				q.display();
				break;
			case 3:
				q.del();
				break;
		}
	}
}
