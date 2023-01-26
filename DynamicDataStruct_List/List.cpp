#include "List.h"

List::List(string firstNodeData)
{
	if (IsEmpty())
	{
		headNodePtr = new Node("Start");
		tailNodePtr = new Node("End", headNodePtr);

		headNodePtr->next = new Node(firstNodeData);
		headNodePtr->next->next = tailNodePtr;

		p = headNodePtr;
	}
}

bool List::IsEmpty()
{
	if (headNodePtr == nullptr)
		return true;

	return false;
}

void List::AddToHead(string data)
{
	p = headNodePtr;
	Node* reserve = headNodePtr->next;

	p->next = nullptr;
	p->next = new Node(data, nullptr, reserve);
}


void List::AddToTail(string data)
{
	p = headNodePtr;

	while (p->GetNextNode().val != "End")
		p = p->GetNextNodeAddress();

	p->GetNextNodeAddress()->val = data;

	tailNodePtr->next = new Node("End", headNodePtr);
	tailNodePtr = tailNodePtr->next;
}

void List::DeleteFromHead()
{
	p = headNodePtr;
	Node* reserve = headNodePtr->next->next;

	delete p->next;
	p->next = reserve;
}

void List::DeleteFromTail()
{
	p = headNodePtr;

	Node* reserve = nullptr;

	while (p->GetNextNodeAddress()->GetNextNode().val != "End")
		p = p->GetNextNodeAddress();
	
	reserve = p;
	delete p->next;

	p->next = tailNodePtr;
}

void List::DeleteAll()
{
	p = headNodePtr;
	Node* reserve = nullptr;

	while (p->GetNextNode().next != nullptr)
	{
		reserve = p->next;
		delete p;
		p = reserve;
	}
}

void List::ShowToConsole()
{
	p = headNodePtr;

	while (p->GetNextNode().val != "End")
	{
		cout << p->GetNextNode().val << endl;

		p = p->GetNextNodeAddress();
	}
}



