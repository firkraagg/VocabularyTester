#include "Tester.h"
#include "Colors.h"

void Tester::pickFormOfTest()
{
    std::cout << LIGHT_BLUE_TEXT << "Napis cislo testu, ktory chces spustit: " << RESET_COLOR
				 DARK_GREEN_TEXT << "\n1." << ORANGE_TEXT << " Cely test, ktory obsahuje vsetky slovicka" << RESET_COLOR
				 DARK_BLUE_TEXT << "\n2." << DARK_YELLOW_TEXT << " Len slovicka, ktore si nevedel" << RESET_COLOR << std::endl;

    if (!(std::cin >> _formOfTest)) {
        std::cout << RED_TEXT << "Mas zadat cislo testu!!" << RESET_COLOR << std::endl << "--------------------------------------------------------\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        pickFormOfTest();
        return;
    }
    if (_formOfTest != 1 && _formOfTest != 2)
    {
        std::cout << RED_TEXT << "Zadal si zle cislo testu!" << RESET_COLOR << std::endl << "--------------------------------------------------------\n";
        pickFormOfTest();

    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    system("CLS");
}

void Tester::writeTest(WordArray& array, UserInput& userInput)
{
    std::string input;
    switch (_formOfTest)
    {
    case 1:
        array.writeSentence(array.getCounter());
        break;
    case 2:
    	array.writeSentence(array.getForgottenWordsIndexes().at(array.getCounter()));
        break;
    }

    array.compare(userInput.getUserInput(), _formOfTest);
    std::cout << "\n\n\n\n\n\n";
}

void Tester::setFormOfTest(int formOfTest)
{
    _formOfTest = formOfTest;
}

int Tester::getFormOfTest()
{
    return _formOfTest;
}
