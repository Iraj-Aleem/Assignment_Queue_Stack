#include <iostream>
using	namespace	std;
//#include"stack.h"
#include<stack>
#include"text_editor.h"


using	namespace	std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
 	text_editor editor;
	editor.update_document("Iraj");
    editor.update_document("Programmer");
    editor.undo();
    editor.undo();
    editor.undo();
    return 0;
}
