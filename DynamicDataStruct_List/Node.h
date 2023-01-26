#pragma once
#include <string>

using namespace std;

struct Node
{
	string val;

	Node *next, *finite;
	Node GetNextNode(), *GetNextNodeAddress();

	Node(string _val, Node* _finite = nullptr, Node* _next = nullptr) : val(_val), finite(_finite), next(_next) {}

	bool IsEmptyNextNode();
};
