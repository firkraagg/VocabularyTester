#include "PercentageScale.h"
#include "Colors.h"
#include "Tester.h"

void PercentageScale::setPercentage(WordArray& knownWords)
{
	_percentage = (knownWords.getPointCounter() / knownWords.getSize()) * 100;
}

void PercentageScale::writeFinalMark()
{
	if (_percentage >= 93)
	{
		std::cout << GREEN_TEXT <<"Parada! Si ready na test. [A]" << _percentage << "%" << RESET_COLOR << '\n';
	}
	else if (_percentage >= 85)
	{
		std::cout << YELLOW_TEXT << "Dost dobree, ale je priestor pre zlepsenie. [B]" << _percentage << "%" << RESET_COLOR << '\n';
	}
	else if (_percentage >= 75)
	{
		std::cout << YELLOW_TEXT << "Celkom fajn, treba este potrenovat. [C]" << _percentage << "%" << RESET_COLOR << '\n';
	}
	else if (_percentage >= 69)
	{
		std::cout << ORANGE_TEXT << "Slabota, ale postaci. [D]" << _percentage << "%" << RESET_COLOR << '\n';
	}
	else if (_percentage >= 61)
	{
		std::cout << ORANGE_TEXT << "Prejdes s odretymi usami. [E]" << _percentage << "%" << RESET_COLOR << '\n';
	}
	else
	{
		std::cout << RED_TEXT << "Si v p*ci. [Fx]" << _percentage << "%" << RESET_COLOR << '\n';
	}
}
