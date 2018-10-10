#pragma once
#include "Node.h"

class LinkedList
{
private:
	Node * Head;

	Node* CreateNode(int val);

	// Returns the last node.
	Node* GetLastNode();

	void DeleteAtStart();

public:
	LinkedList();

	~LinkedList();

	// Inserts a value at the end.
	void Insert(int val);

	// Inserts the element at the start.
	void InsertAtStart(int val);

	// Inserts the value at a given index.
	void InsertAt(int index, int val);

	// Deletes the node at a given index.
	void DeleteAt(int index);

	// Prints the data on to the console.
	void Show();
};