#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

class WordArray
{
private:
	std::vector<std::string> _wordArray;
	std::vector<int> _forgottenWordsIndexes;
	std::vector<std::string> _sentences;
	std::ofstream* _writer = nullptr;
	std::ifstream* _reader = nullptr;
	std::string _fileName;
	int _counter = 0;
	int _pointCounter = 0;

public:
	WordArray(const std::string& fileName);
	std::string userInput;
	void compare(const std::string userInput, int formOfTest);
	void writeSentence(int index);
	double getSize();
	int getCounter();
	void writeToFile();
	void readFromFile();
	bool isInArray(int index);
	double getPointCounter();
	std::vector<int>& getForgottenWordsIndexes();
	void reset();
	~WordArray();
};

