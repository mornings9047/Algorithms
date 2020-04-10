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

void List::addAt(int index, int value) {	// 첫 번째 노드의 index를 1로 설정
	Node * node = new Node(value);
	if (index<=0 || index>length)
		printf("index 설정이 잘못되었습니다. \n\n");
	else if (index == 1) 
		addFirst(value);
	else if (index == length)
		addLast(value);
	else {
		Node * front = head;	// 새로 추가할 노드 앞에 있는 기존의 노드
		for (int i = 1; i < index - 1; i++)
			front = front->next;

		Node * back = front->next;	// 새로 추가할 노드 뒤에 있는 기존의 노드

		node->prev = front;
		node->next = back;
		front->next = node;
		back->prev = node;
	}
	length++;
}

void List::deleteFirst() {

}

int List::getLength() {
	return length;
}

void List::display() {
	Node * point = head;
	while (point != nullptr) {
		printf("%4d", point->value);
		point = point->next;
	}
	printf("\n\n");
}
