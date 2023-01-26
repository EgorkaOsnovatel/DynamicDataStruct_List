#include "Node.h"

Node Node::GetNextNode()
{
	if (next == nullptr)
		return *finite;
	else
		return *next;
}

Node* Node::GetNextNodeAddress()
{
	if (next == nullptr)
		return finite;
	else
		return next;
}

bool Node::IsEmptyNextNode()
{
	if (next == nullptr)
		return true;
	
	return false;
}