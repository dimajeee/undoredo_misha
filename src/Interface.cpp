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
	// инструменты для реализации интерфейса
	Text obj;
	std::string inputStr;
	bool bl = true;

	// start
	std::cout << "Добро пожаловать в программу Undo-Redo\n";

	std::cout << "Перечень команд:\n\tAdd - добавить строку\n\tDelete - удалить кол-во символов\n\tUndo - ctrl+Z\n\tRedo - ctrl+Y\n";

	std::cout << "После указания команды, в следующей строке нужно записать:\n\tAdd - строку, которую дописать (учитывать пробелы)\n\tDelete - цифру, кол-во символов для удаления\n";

	std::cout << "Для команд Undo, Redo, Print ничего указывать не надо";

	std::cout << "start:\n\n";


	while (bl)
	{
		std::getline(std::cin, inputStr, '\n');
		
		switch (CheckValue(inputStr))
		{
		case Add:
			std::cout << "Введите строку, которую хотите дописать:\t";

			std::getline(std::cin, inputStr);
		
			Text::Add(obj, inputStr);

			std::cout << "Ваша строка:\t";
			Text::Print(obj);
		
			break;


		case Delete:
			std::cout << "Введите кол-во символов, которое желаете удалить:\t";

			std::getline(std::cin, inputStr);
		
			Text::Delete(obj, std::stoi(inputStr));
		
			std::cout << "Ваша строка:\t";
			Text::Print(obj);

			break;


		case Undo:
			std::cout << "Отменяю предыдущее действие\n";

			Text::Undo(obj);

			std::cout << "Ваша строка:\t";
			Text::Print(obj);

			break;


		case Redo:
			std::cout << "Отменяю отмену\n";

			Text::Redo(obj);

			std::cout << "Ваша строка:\t";
			Text::Print(obj);

			break;


		case Stop:
			
			bl = false;
		
			break;

		
		case 0:
			std::cout << "Вы ввели недопустимую команду, переченб допустимых команд:\n";

			std::cout << "Перечень команд:\n\tAdd - добавить строку\n\tDelete - удалить кол-во символов\n\tUndo - ctrl+Z\n\tRedo - ctrl+Y\n";

			std::cout << "После указания команды, в следующей строке нужно записать:\n\tAdd - строку, которую дописать (учитывать пробелы)\n\tDelete - цифру, кол-во символов для удаления\n";

			std::cout << "Для команд Undo, Redo, Print ничего указывать не надо";

			break;
		}
	}

	


}
