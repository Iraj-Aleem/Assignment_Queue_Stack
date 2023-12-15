#include <iostream>
using namespace std;
#include"PrintRequest.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    // Create a new print queue
    PrintQueue queue;

    // Enqueue some print requests
    queue.enqueue(1, "Report");
    queue.enqueue(2, "Memo");
    queue.enqueue(3, "Letter");
    queue.enqueue(4, "Form");

    // Process the print requests in the order they were received
    while (true) {
        cout << "Press ENTER to process the next print request, or Q to quit." << endl;
        string input;
        getline(cin, input);

        if (input.empty()) {
            queue.dequeue();
        } else if (input == "Q" || input == "q") {
            break;
        } else {
            cout << "Invalid input. Please try again." << endl;
        }
    }

    return 0;
}
