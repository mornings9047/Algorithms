#include <iostream>
#include "Doubly Linked List.h"
using namespace std;

int main() {
	List * list = new List();
	list->addFirst(10);
	list->addFirst(20);
	list->addFirst(30);

	list->addLast(1);
	list->addLast(2);
	list->addLast(3);

	list->display();

	return 0;
}
