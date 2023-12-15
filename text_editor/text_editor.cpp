#include <iostream>
#include "text_editor.h"
#include<stack>
using namespace std;
stack<string> undoStack;
void text_editor::undo() {
    if (!undoStack.empty()) {
        string lastchange = undoStack.top();
        undoStack.pop();
        cout << "Undo last change: " << lastchange << endl;
    }
    else {
        cout << "Nothing to undo" << endl;
    }
}
void text_editor::update_document(string change) {
    cout << "Document updated with change: " << change << endl;
    undoStack.push(change);
}
