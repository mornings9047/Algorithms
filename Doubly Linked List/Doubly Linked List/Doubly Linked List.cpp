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
	if (index < 1 || index > length + 1) {
		printf("index 설정이 잘못되었습니다. \n\n");
		return;
	}

	// 첫 노드의 index를 1로 설정했기 때문에 index가 1인 경우와 length + 1인 경우를 addFirst(), addLast()로 해주어야 함
	if (index == 1)
		addFirst(value);
	else if (index == length + 1)
		addLast(value);
	else if (index <= (length + 1) / 2) {		// 앞에서 추가
		Node * node = new Node(value);
		Node * point = head;	// 새로 추가할 노드 앞에 있는 기존의 노드
		for (int i = 1; i < index - 1; i++)
			point = point->next;
		node->prev = point;
		node->next = point->next;
		point->next = node;
		point->next->prev = node;
		length++;
	}
	else {		// 뒤에서 추가
		Node * node = new Node(value);
		Node * point = tail;
		for (int i = 0; i < length - index; i++)
			point = point->prev;
		point->prev->next = node;
		node->prev = point->prev;
		node->next = point;
		point->prev = node;
		length++;
	}
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
	if (length == 0)
		printf("삭제할 노드가 존재하지 않습니다.\n");
	else if (index < 1 || length < index)
		printf("index를 잘못 입력하셨습니다.\n");
	else if (index == 1)
		deleteFirst();
	else if (index == length)
		deleteLast();
	else {
		Node * point;

		int cnt = 1;
		if (index <= (length + 1) / 2) {		// 앞에서 삭제
			point = head;

			while (cnt < index) {
				point = point->next;
				//printf("point->prev: %d, point: %d, point->next: %d \n", point->prev->value, point->value, point->next->value);
				cnt++;
			}

			printf("point->prev: %d, point: %d, point->next: %d \n\n", point->prev->value, point->value, point->next->value);


			point->prev->next = point->next;
			point->next->prev = point->prev;
			delete(point);
		}
		else {		// 뒤에서 삭제
			point = tail;


			
		}
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
