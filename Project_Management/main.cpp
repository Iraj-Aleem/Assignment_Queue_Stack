#include <iostream>
#include"deque.h"
//#include <deque>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	deque deque;
    deque.push_front("Task s1");
	deque.pop_back();
    deque.push_front("Task 3");
    deque.push_back("Task 4");
    deque.pop_front();
    deque.pop_back();
    deque.print();
    return 0;
}
