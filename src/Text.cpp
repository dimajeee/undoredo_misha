#include "Text.h"

std::string Text::minusUndo()
{
	std::string copy = undo.head->data;
	undo.pop_front();
	return copy;
}

void Text::plusUndo(std::string plusStr)
{
	undo.push_front(plusStr);
}

std::string Text::minusRedo()
{
	std::string copy = redo.head->data;
	redo.pop_front();
	return copy;
}

void Text::plusRedo(std::string plusStr)
{
	redo.push_front(plusStr);
}

void Text::Add(Text& obj, std::string strForWork)
{
	obj.plusUndo(obj.mainString);

	obj.redo.Clear();

	obj.mainString += strForWork;
}

void Text::Delete(Text& obj, int n)
{
	obj.plusUndo(obj.mainString);

	std::string copystr = "";
	for (int i = 0; i < obj.Size() - n; i++)
	{
		copystr += obj.mainString[i];
	}

	obj.mainString = copystr;

	obj.redo.Clear();
}

void Text::Undo(Text& obj)
{
	obj.plusRedo(obj.mainString);
	obj.mainString = obj.minusUndo();
}

void Text::Redo(Text& obj)
{
	if (obj.redo.Size == 0)
		throw "We can`t do this operation";

	obj.plusUndo(obj.mainString);
	obj.mainString = obj.minusRedo();
}