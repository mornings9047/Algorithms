#include <stdio.h>
using namespace std;

class Node {
public:
	Node * prev;
	Node * next;
	int value;

	Node(int value = 0) :value{ value } {
		prev = next = nullptr;
	}
};

class List {
protected:
	Node * head;
	Node * tail;
	int length;

public:
	List() {
		head = tail = nullptr;
		length = 0;
	}

	~List();

	void addFirst(int value) {
		Node * node = new Node(value);
		if (head == nullptr) {	// 추가하는 노드가 첫 노드인 경우
			head = node;
			tail = node;
			length++;
		}
		else {	// 추가하는 노드가 첫 노드가 아닌 경우
			node->next = head;
			head->prev = node;
			head = node;
		}
	}

	void addLast(int value);
	void insertN();
	void deleteFirst();
	void deleteLast();
	void deleteN();

	void display() {
		Node * point = head;
		while (point != nullptr) {
			printf("value = %d \n", point->value);
			point = point->next;
		}
	}
};

int main() {
	List * list = new List();
	list->addFirst(10);
	list->addFirst(20);
	list->addFirst(30);

	list->display();


	return 0;
}
