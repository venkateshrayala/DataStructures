#pragma once

class Node
{
public:
	int value;
	Node* next;

	Node()
	{
		value = 0;
		next = nullptr;
	}
};