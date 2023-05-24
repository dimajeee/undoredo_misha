#include "List.h"

List::List()
{
	this->head = nullptr;
	this->Size = 0;
}

List::~List()
{
	Clear();
}

void List::push_front(std::string data)
{
	head = new Node(data, head);
	Size++;
}

void List::pop_front()
{
	if (Size == 0)
	{
		throw "you are an idiot";
	}
	else
	{
		Node* copyNextNode = head;
		head = head->pNext;
		delete copyNextNode;
		copyNextNode = nullptr;
		Size--;
	}
}

void List::Print()
{
	Node* iter = head;
	int counter = 1;
	while (iter != nullptr)
	{
		std::cout << "Node number " << counter << ":\t" << iter->data << std::endl;
		iter = iter->pNext;
		counter++;
	}
}

void List::Clear()
{
	while (Size)
		pop_front();
}