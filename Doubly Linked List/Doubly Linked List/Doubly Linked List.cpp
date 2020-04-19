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

List::~List() {
	if (length != 0)
		deleteAll();
	printf("List Destroyed \n\n");
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
	if (length == 0)
		printf("삭제할 node가 존재하지 않습니다.\n");
	else if (length == 1) {
		delete(head);
		head = tail = nullptr;
		length--;
	}
	else {
		Node * node = head;
		head = node->next;
		node->next->prev = head;
		delete(node);
		length--;
	}
}

void List::deleteLast() {
	if (length == 0)
		printf("삭제할 node가 존재하지 않습니다.\n");
	else if (length == 1) {
		delete(head);
		head = tail = nullptr;
		length--;
	}
	else {
		Node * node = tail;
		node->prev->next = nullptr;
		tail = node -> prev;
		delete(node);
		length--;
	}
}

void List::deleteAt(int index) {
	int cnt = 1;

	if (length == 0)
		printf("삭제할 노드가 존재하지 않습니다.\n");
	else if (index < 1 || length < index)
		printf("index를 잘못 입력하셨습니다.\n");
	else if (index == 1)
		deleteFirst();
	else if (index == length)
		deleteLast();
	else {
		Node * node = head;
		while (cnt++ != index)
			node = node->next;
		node->prev->next = node->next;
		node->next->prev = node->prev;
		delete(node);
		length--;
	}
}

void List::deleteAll() {
	if (head == nullptr)
		return;
	else {
		Node * node = head;
		while (node->next != nullptr) {
			node = head->next;
			delete(head);
			head = node;

		}
		delete(head);
		head = tail = nullptr;
		length = 0;
	}
}

int List::getLength() {
	return length;
}

void List::display() {
	if (length == 0) {
		printf("노드가 존재하지 않습니다.\n\n");
	}
	else {
		Node * point = head;
		while (point != nullptr) {
			printf("%4d", point->value);
			point = point->next;
		}
		printf("\n\n");
	}
}
