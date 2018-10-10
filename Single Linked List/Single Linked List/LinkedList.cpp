#include "stdafx.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	Head = nullptr;
}

Node* LinkedList::CreateNode(int val)
{
	Node* node;
	node = new Node;
	node->value = val;

	return node;
}

Node* LinkedList::GetLastNode()
{
	Node* lastNode = nullptr;

	lastNode = Head;

	while (lastNode->next != nullptr)
	{
		lastNode = lastNode->next;
	}

	return lastNode;
}

void LinkedList::DeleteAtStart()
{
	Node* node = nullptr;

	if (Head)
	{
		node = Head->next;
		delete Head;
	}

	Head = node;
}

void LinkedList::Insert(int val)
{
	Node* node = CreateNode(val);

	// This is the first time we are creating a node. Hence this becomes the Head.
	if (Head == nullptr)
	{
		Head = node;
	}
	else
	{
		Node* lastNode = GetLastNode();

		lastNode->next = node;
	}
}

void LinkedList::InsertAtStart(int val)
{
	Node* node = CreateNode(val);

	if (Head)
	{
		node->next = Head;
		Head = node;
	}
	else
	{
		Head = node;
	}
}

void LinkedList::InsertAt(int index, int val)
{
	if (index == 0)
	{
		InsertAtStart(val);
		return;
	}

	Node* node = Head;

	for (int i = 0; i < index - 1; i++)
	{
		node = node->next;
	}

	Node* newNode = CreateNode(val);

	newNode->next = node->next;

	node->next = newNode;
}

void LinkedList::DeleteAt(int index)
{
	if (index == 0)
	{
		DeleteAtStart();
	}
	else
	{
		Node* node = Head;
		Node* currentNode = nullptr;

		for (int i = 0; i < index - 1; i++)
		{
			node = node->next;
		}

		currentNode = node->next;
		node->next = currentNode->next;

		delete currentNode;
	}
}

void LinkedList::Show()
{
	Node* node = Head;

	if (node == nullptr)
	{
		cout << "Linked List is empty" << endl;
	}
	else
	{
		while (node->next != nullptr)
		{
			cout << node->value << endl;
			node = node->next;
		}

		cout << node->value << endl;
	}
}

LinkedList::~LinkedList()
{
	Node* node = Head;
	Node* next = nullptr;

	while (node->next != nullptr)
	{
		next = node->next;
		delete node;
		node = next;
	}
	delete node;
}