#ifndef TEXT_EDITOR_H
#define TEXT_EDITOR_H
#include<iostream>
#include <stack>
#include <string>

class text_editor {
public:
    std::stack<std::string> undoStack;
public:
    void update_document(std::string change);
    void undo();
};

#endif
