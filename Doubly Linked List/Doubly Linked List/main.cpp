#include <iostream>
#include "Doubly Linked List.h"
using namespace std;

int main() {
	List * list = new List();
	
	list->addFirst(10);
	list->addFirst(20);
	list->addFirst(30);
	list->display();

	list->addLast(1);
	list->addLast(2);
	list->addLast(3);
	list->display();

	list->addAt(3, 9);
	list->addAt(5, 8);
	list->addAt(1, 8);
	list->display();

	list->deleteFirst();
	list->deleteFirst();
	list->deleteFirst();
	list->display();

	list->deleteLast();
	list->deleteLast();
	list->deleteLast();
	list->display();
	
	return 0;
}
