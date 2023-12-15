#include <iostream>
#include <cstdlib>
#include <ctime>
#include"Deque.h"

	void	Deque:: insertFront(int data) {
        Node* newNode = new Node();
        newNode->data=data;
        if (front == NULL) {
            front = rear = newNode;
        }
        else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Insert element at the rear of the deque
	void	Deque:: insertRear(int data) {
        Node* newNode = new Node();
        newNode->data=data;
        if (rear == NULL) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    // Remove element from the front of the deque
    void	Deque:: removeFront() {
        if (front == NULL) {
            cout << "Deque is empty." << endl;
        }
        else {
            Node* temp = front;
            front = front->next;
            if (front == NULL) {
                rear = NULL;
            }
            else {
                front->prev = NULL;
            }
            delete temp;
        }
    }

    // Remove element from the rear of the deque
    void	Deque:: removeRear() {
        if (rear == NULL) {
            cout << "Deque is empty." << endl;
        }
        else {
            Node* temp = rear;
            rear = rear->prev;
            if (rear == NULL) {
                front = NULL;
            }
            else {
                rear->next = NULL;
            }
            delete temp;
        }
    }

    // Shuffle the playlist using the Fisher-Yates algorithm
    void	Deque:: shuffle() {
        int size = getSize();
        srand(time(NULL));
        for (int i = size - 1; i >= 1; i--) {
            int j = rand() % (i + 1);
            swap(i, j);
        }
    }

    // Swap the data of two nodes
    void	Deque:: swap(int i, int j) {
        if (i == j) {
            return;
        }
        Node* node1 = getNode(i);
        Node* node2 = getNode(j);
        int temp = node1->data;
        node1->data = node2->data;
        node2->data = temp;
    }

    // Get the node at a given index
    Node* Deque::getNode(int index){
        if (index < 0 || index >= getSize()) {
            return NULL;
        }
        Node* node = front;
        for (int i = 0; i < index; i++) {
            node = node->next;
        }
        return node;
    }

    // Get the size of the deque
    int	Deque:: getSize() {
        int size = 0;
        Node* node = front;
        while (node != NULL) {
            size++;
            node = node->next;
        }
        return size;
    }

    // Print the deque in order
    void Deque::print() {
        Node* node = front;
        while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

