#pragma once

class Node {
public:
	Node * prev;
	Node * next;
	int value;

	Node(int value = 0);
};

class List {
//protected:
public:
	Node * head;
	Node * tail;
	int length;

//public:
	List();
	~List();

	void addFirst(int value);
	void addLast(int value);
	void addAt(int index, int value);

	void deleteFirst();
	void deleteLast();
	void deleteAt(int index);
	void deleteAll();

	int getLength();
	void display();
};
