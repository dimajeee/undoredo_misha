#include "Interface.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	
	/*
	* тест комманд
	try {
		Text obj;
		Text::Add(obj, "string");	Text::Print(obj);

		Text::Add(obj, "\tnumber\n");	Text::Print(obj);

		Text::Delete(obj, 5);	Text::Print(obj);

		Text::Undo(obj);	Text::Print(obj);

		Text::Redo(obj);	Text::Print(obj);

		Text::Undo(obj);	Text::Print(obj);

		Text::Undo(obj);	Text::Print(obj);

		Text::Add(obj, "\tresult string");	Text::Print(obj);

		// Text::Redo(obj);
	}
	catch (char* c)
	{
		cout << c << endl;
	}
	*/

	Interface::MainFunction();

	return 0;
}