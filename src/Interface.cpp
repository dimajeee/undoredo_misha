#include "Interface.h"

int Interface::CheckValue(std::string value)
{
	if (value == "Add")
		return 1;

	if (value == "Delete")
		return 2;

	if (value == "Undo")
		return 3;

	if (value == "Redo")
		return 4;

	if (value == "Stop")
		return 5;

	return 0;
}

void Interface::MainFunction()
{
	// ����������� ��� ���������� ����������
	Text obj;
	std::string inputStr;
	bool bl = true;

	// start
	std::cout << "����� ���������� � ��������� Undo-Redo\n";

	std::cout << "�������� ������:\n\tAdd - �������� ������\n\tDelete - ������� ���-�� ��������\n\tUndo - ctrl+Z\n\tRedo - ctrl+Y\n";

	std::cout << "����� �������� �������, � ��������� ������ ����� ��������:\n\tAdd - ������, ������� �������� (��������� �������)\n\tDelete - �����, ���-�� �������� ��� ��������\n";

	std::cout << "��� ������ Undo, Redo, Print ������ ��������� �� ����";

	std::cout << "start:\n\n";


	while (bl)
	{
		std::getline(std::cin, inputStr, '\n');
		
		switch (CheckValue(inputStr))
		{
		case Add:
			std::cout << "������� ������, ������� ������ ��������:\t";

			std::getline(std::cin, inputStr);
		
			Text::Add(obj, inputStr);

			std::cout << "���� ������:\t";
			Text::Print(obj);
		
			break;


		case Delete:
			std::cout << "������� ���-�� ��������, ������� ������� �������:\t";

			std::getline(std::cin, inputStr);
		
			Text::Delete(obj, std::stoi(inputStr));
		
			std::cout << "���� ������:\t";
			Text::Print(obj);

			break;


		case Undo:
			std::cout << "������� ���������� ��������\n";

			Text::Undo(obj);

			std::cout << "���� ������:\t";
			Text::Print(obj);

			break;


		case Redo:
			std::cout << "������� ������\n";

			Text::Redo(obj);

			std::cout << "���� ������:\t";
			Text::Print(obj);

			break;


		case Stop:
			
			bl = false;
		
			break;

		
		case 0:
			std::cout << "�� ����� ������������ �������, �������� ���������� ������:\n";

			std::cout << "�������� ������:\n\tAdd - �������� ������\n\tDelete - ������� ���-�� ��������\n\tUndo - ctrl+Z\n\tRedo - ctrl+Y\n";

			std::cout << "����� �������� �������, � ��������� ������ ����� ��������:\n\tAdd - ������, ������� �������� (��������� �������)\n\tDelete - �����, ���-�� �������� ��� ��������\n";

			std::cout << "��� ������ Undo, Redo, Print ������ ��������� �� ����";

			break;
		}
	}

	


}
