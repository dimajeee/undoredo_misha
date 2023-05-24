#pragma once
#include "List.h"

class Text {
private:

	std::string mainString;

	size_t Size() { return mainString.length(); }

	List undo;

	List redo;

	std::string minusUndo();

	void plusUndo(std::string plusStr);

	std::string minusRedo();

	void plusRedo(std::string plusStr);

public:

	Text() {
		this->mainString = "";
	}
	~Text()
	{

	}


	static void Add(Text& obj, std::string strForWork);

	static void Delete(Text& obj, int n);

	static void Undo(Text& obj);

	static void Redo(Text& obj);

	static void Print(Text& obj) { std::cout << obj.mainString << std::endl; }

};