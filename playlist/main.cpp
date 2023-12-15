#include <iostream>
#include <cstdlib>
#include <ctime>
#include"Deque.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
Deque playlist;
playlist.insertRear(1);
playlist.insertRear(2);
playlist.insertRear(3);
playlist.insertRear(4);
playlist.insertRear(5);

cout << "Playlist in order:" << endl;
playlist.print();

playlist.shuffle();
cout << "Playlist shuffled:" << endl;
playlist.print();

return 0;
}

