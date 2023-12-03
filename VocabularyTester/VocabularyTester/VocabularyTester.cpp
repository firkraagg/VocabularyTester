#include "PercentageScale.h"
#include "WordArray.h"
#include "Tester.h"

int main(int argc, char* argv[])
{
    WordArray words("indexes.txt");
    UserInput userInput;
    Tester tester;
    PercentageScale percentageScale;

    while (true)
    {
        words.readFromFile();
        tester.pickFormOfTest();
        switch (tester.getFormOfTest())
        {
        case 1:
            words.getForgottenWordsIndexes().clear();
            while (words.getCounter() != words.getSize())
            {
                tester.writeTest(words, userInput);
                if (words.getCounter() == words.getSize())
                {
                    percentageScale.setPercentage(words);
                    percentageScale.writeFinalMark();
                    words.writeToFile();
                    std::cout << "-------------------------------------------\n";
                    break;
                }
            }
            break;

        case 2:
            while (words.getCounter() != words.getForgottenWordsIndexes().size())
            {
                tester.writeTest(words, userInput);
                if (words.getCounter() == words.getForgottenWordsIndexes().size())
                {
                    system("CLS");
                    words.writeToFile();
                    std::cout << "-------------------------------------------\n";
                    break;
                }
            }
            break;

        default:
            tester.pickFormOfTest();
        }
        words.reset();
    }
}