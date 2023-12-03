#include "UserInput.h"


const std::string UserInput::getUserInput()
{
	std::getline(std::cin, _userInput);
	return _userInput;
}
