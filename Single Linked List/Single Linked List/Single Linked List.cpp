// Single Linked List.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "LinkedList.h"
#include <memory>
#include <iostream>
using namespace std;

int main()
{
	unique_ptr<LinkedList> linkedList(new LinkedList);

	linkedList->Insert(10);
	linkedList->Show();
	cout << "----------------------------" << endl;

	linkedList->Insert(20);
	linkedList->Show();
	cout << "----------------------------" << endl;

	linkedList->Insert(30);
	linkedList->Show();
	cout << "----------------------------" << endl;

	linkedList->InsertAtStart(5);
	linkedList->Show();
	cout << "----------------------------" << endl;

	linkedList->InsertAt(0, 40);
	linkedList->Show();
	cout << "----------------------------" << endl;

	linkedList->DeleteAt(2);
	linkedList->Show();
	cout << "----------------------------" << endl;

    return 0;
}