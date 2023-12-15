#include <iostream>
#include"node.h"
#include"deque.h"
//#include <deque>
using namespace std;


    void	deque:: push_front(string task) {
        node* new_node = new node;
        new_node->task = task;
        new_node->next = head;
        new_node->prev = NULL;

        if (head != NULL) {
            head->prev = new_node;
        }

        head = new_node;

        if (tail == NULL) {
            tail = new_node;
        }
    }

	void	deque::push_back(string task) {
        node* new_node = new node;
        new_node->task = task;
        new_node->prev = tail;
        new_node->next = NULL;

        if (tail != NULL) {
            tail->next = new_node;
        }

        tail = new_node;

        if (head == NULL) {
            head = new_node;
        }
    }

    void	deque:: pop_front() {
        if (head == NULL) {
            return;
        }

        node* temp = head;

        if (head == tail) {
            head = NULL;
            tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }

     void	deque:: pop_back() {
        if (tail == NULL) {
            return;
        }

        node* temp = tail;

        if (tail == head) {
            tail = NULL;
            head = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }

        delete temp;
    }

     void	deque::print() {
        node* current = head;

        while (current != NULL) {
            cout << current->task << " ";
            current = current->next;
        }

        cout << endl;
    }

