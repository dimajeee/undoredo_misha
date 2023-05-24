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

	// ������ ��� Size
	int GetSize() { return Size; }

	// ������ � ������
	void push_front(std::string data);

	// �������� ������� �������
	void pop_front();

	// ����� � �������
	void Print();

	// ������� �������
	void Clear();

};
