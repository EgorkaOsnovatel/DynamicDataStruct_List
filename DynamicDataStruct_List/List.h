#pragma once

#include <string>
#include <iostream>
#include "Node.h"

using namespace std;

class List
{
private:
	Node* headNodePtr, *tailNodePtr;
	Node *p;

public:

	List(string firstNode);

	void AddToHead(string data), AddToTail(string data);
	void DeleteFromHead(), DeleteFromTail(), DeleteAll();
	void ShowToConsole();
	bool IsEmpty();
};

