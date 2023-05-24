#pragma once

#include <iostream>
#include <string>

class List
{

private:

	struct Node
	{
		Node* pNext;

		std::string data;

		Node(std::string data = "", Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

public:

	Node* head;

	int Size;

	List();

	~List();

	// геттер для Size
	int GetSize() { return Size; }

	// запись в начало
	void push_front(std::string data);

	// удаление первого объекта
	void pop_front();

	// вывод в консоль
	void Print();

	// очистка объекта
	void Clear();

};
