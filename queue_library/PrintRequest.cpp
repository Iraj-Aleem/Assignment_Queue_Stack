#include <iostream>
#include"PrintRequet.h"
using namespace std;
class PrintQueue {
public:
    // Constructor - initializes an empty queue
    PrintQueue() : head(NULL), tail(NULL) {}

    // Destructor - frees any remaining print requests in the queue
    ~PrintQueue() {
        while (head != NULL) {
            PrintRequest* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Add a new print request to the end of the queue
    void enqueue(int id, const string& name) {
        PrintRequest* new_request = new PrintRequest;
        new_request->document_id = id;
        new_request->document_name = name;
        new_request->next = NULL;

        if (tail != NULL) {
            tail->next = new_request;
        } else {
            head = new_request;
        }

        tail = new_request;
    }

    // Process the next print request in the queue
    void dequeue() {
        if (head == NULL) {
            cout << "No print requests to process." << endl;
        } else {
            PrintRequest* temp = head;
            head = head->next;

            cout << "Processing print request for document "
                 << temp->document_name << " (ID " << temp->document_id << ")" << endl;

            delete temp;

            if (head == NULL) {
                tail = NULL;
            }
        }
    }

public:
    PrintRequest* head;
    PrintRequest* tail;
};
