#pragma once
#include "Text.h"

class Interface
{
private:

	enum Commands
	{
		Add = 1,
		Delete = 2,
		Undo = 3,
		Redo = 4,

		Stop = 5
	};

	static int CheckValue(std::string value);

public:
	static void MainFunction();
};

