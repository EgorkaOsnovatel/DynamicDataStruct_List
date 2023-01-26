#include <iostream>
#include "List.h"

using namespace std;

int main()
{
	List customList("First");

	customList.AddToHead("Two");
	customList.AddToHead("Three");
	customList.AddToHead("Four");

	customList.DeleteFromHead();
	customList.DeleteFromTail();
	customList.DeleteAll();

	customList.ShowToConsole();
}