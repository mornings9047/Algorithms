#include <iostream>
#include "Doubly Linked List.h"
using namespace std;

int main() {
	List * list = new List();

	printf("addFirst() Test \n");
	list->addFirst(40);
	list->addFirst(30);
	list->addFirst(20);
	list->addFirst(10);
	list->display();

	printf("addLast() Test \n");
	list->addLast(1);
	list->addLast(2);
	list->addLast(3);
	list->addLast(4);
	list->display();

	printf("addAt() Test \n");
	
	list->addAt(1, 2);
	list->display();

	list->addAt(5, 5);
	list->display();

	list->addAt(10, 10);
	list->display();

	printf("deleteFirst() Test \n");
	list->deleteFirst();
	list->deleteFirst();
	list->display();

	printf("deleteLast() Test \n");
	list->deleteLast();
	list->deleteLast();
	list->display();

	printf("deleteAt() Test \n");
	list->deleteAt(3);
	list->deleteAt(5);
	list->display();

	printf("deleteAll() Test \n");
	list->deleteAll();
	list->display();

	delete(list);

	return 0;
}
