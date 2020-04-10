#include <stdio.h>
#include "Doubly Linked List.h"
using namespace std;

Node::Node(int value) :value{ value } {
	prev = next = nullptr;
}

List::List() {
	head = tail = nullptr;
	length = 0;
}

void List::addFirst(int value) {
	Node * node = new Node(value);
	if (head == nullptr)	// 추가하는 노드가 첫 노드인 경우
		head = tail = node;
	else {	// 추가하는 노드가 첫 노드가 아닌 경우
		node->next = head;
		head->prev = node;
		head = node;
	}
	length++;
}

void List::addLast(int value) {
	Node * node = new Node(value);
	if (tail == nullptr)	// 추가하는 노드가 첫 노드인 경우
		head = tail = node;
	else {	// 추가하는 노드가 첫 노드가 아닌 경우
		tail->next = node;
		node->prev = tail;
		tail = node;
	}
	length++;
}

void List::display() {
	Node * point = head;
	while (point != nullptr) {
		printf("value = %d \n", point->value);
		point = point->next;
	}
}
