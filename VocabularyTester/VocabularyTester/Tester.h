#pragma once
#include "WordArray.h"
#include "UserInput.h"

class Tester
{
private:
	int _formOfTest = 0;

public:
	void pickFormOfTest();
	void writeTest(WordArray& array, UserInput& userInput);
	void setFormOfTest(int formOfTest);
	int	getFormOfTest();
};

