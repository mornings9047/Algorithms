#pragma once

class Node {
public:
	Node * prev;
	Node * next;
	int value;

	Node(int value = 0);
};

class List {
protected:
	Node * head;
	Node * tail;
	int length;

public:
	List();
	~List();
	void addFirst(int value);
	void addLast(int value);
	void insertN();
	void deleteFirst();
	void deleteLast();
	void deleteN();
	void display();
};
