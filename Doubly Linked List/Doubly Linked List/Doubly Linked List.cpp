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
		if (head == nullptr) {	// �߰��ϴ� ��尡 ù ����� ���
			head = node;
			tail = node;
			length++;
		}
		else {	// �߰��ϴ� ��尡 ù ��尡 �ƴ� ���
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
