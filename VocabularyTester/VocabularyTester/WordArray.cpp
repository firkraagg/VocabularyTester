#include "WordArray.h"

#include <fstream>

#include "Colors.h"

WordArray::WordArray(const std::string& fileName)
	:_fileName(fileName)
{
	_writer = new std::ofstream(_fileName, std::ios::app);
	_reader = new std::ifstream(_fileName);
	_wordArray = {
		"conductor", "wire", "electric charge", "insulator", "electric current",
		"semiconductor", "integrated circuit", "silicon wafer", "transistor", "resistor", 
		"capacitor", "bandwidth", "to bond", "wave-guide", "breakthrough",
		"bar chart", "binary digit", "byte", "decrease", "division", 
		"fractions", "increase", "integer value", "multiplication", "number system",
		"pie chart", "power-taking", "root-taking", "signed integer", "subtraction", 
		"to be above", "to drop back", "to fall", "to fluctuate", "to hit a low",
		"to increase", "to level off", "to reach a peak", "to recover", "to remain high",
		"to stand at", "value", "antivirus", "application", "browse",
		"browser", "bug", "communication", "computerize", "connect",
		"connector", "data", "digital", "download", "driver",
		"electronic", "gigabyte", "hardware", "hyperlink", "information",
		"install", "instruction", "kilobit", "launch", "menu", 
		"microchip", "monitor", "output", "plug-in", "process",
		"program", "programmer", "restart", "software", "software package", 
		"store", "system", "technology", "telecommunications", "variable", 
		"virus", "web page", "bit", "address", "key",
		"language", "mouse", "address", "key", "monitor",
		"output", "process", "program", "variable", "computer-aided design",
		"computer-mediated communication", "computer-aided manufacturing", "table", "line graph", "assemble",
		"assemble"



	};
	_sentences = {
		"1. A material or an object that allows free movement of electrons and therefore allows easy flow of electricity",
		"2. A metal conductor that carries electricity over a distance",
		"3. The amount of electricity that an electrical device stores or a substance carries",
		"4. A material or an object that does not conduct electricity",
		"5. Movement of electricity in a particular direction",
		"6. A material that is neither a good conductor of electricity nor a good insulator",
		"7. A microelectronic device that integrates elements as transistors, resistors etc. into an electric circuit having a specific function",
		"8. A thin slice of semiconducting material as silicon crystal on which microcircuits are constructed",
		"9. Regulates current flow or voltage and acts as a switch or gate for electronic signals",
		"10. An electrical device that limits or regulates the flow of current in a circuit",
		"11. An electric circuit element which stores charge temporarily or lets pass through only the alternating current",
		"12. The width of the range or band of frequencies needed for signal processing",
		"13. To link",
		"14. A hollow metal conductor that provides a path to guide microwaves",
		"15. An important discovery that helps to improve a situation or gives answer to the problem",
		"16. A diagram in which the numerical values of variables are represented by the height or length of lines or rectangles of equal width",
		"17. The smallest unit of data that a computer can process and store and also which represent all data in PC",
		"18. Bits being grouped into together with 8 bits",
		"19. Make or become smaller or fewer in size or amount",
		"20. The mathematical operation that determines how many times one number is contained within another number, resulting in the quotient.",
		"21. A numerical quantity that is not a whole number which represents a part of a whole or any number of equal part",
		"22. Become or make greater in size or amount",
		"23. A whole number (not a fractional number) that can be positive, negative, or zero",
		"24. The process of combining matrices, vectors, or other quantities under specific rules to obtain their product",
		"25. A system to represent or express numbers",
		"26. A type of graph that represents the data in the circular graph",
		"27. An operation where a number (the base) is raised to an exponent",
		"28. A number that when multiplied by itself produces the original number (we are finding the root of the number)",
		"29. A data type which represents whole numbers that can have both positive and negative values, including zero",
		"30. An arithmetic operation that represents the process of finding the difference between two numbers",
		"31. In a graph, one curve is considered 'above' another if, at each given x - coordinate, its corresponding y - value is greater than the y - value of the other curve (opposite of to be below)",
		"32. In graph at a certain point, its y-value decreases relative to the previous position along the horizontal axis.",
		"33. In a graph, when its values along the vertical axis decrease, indicating a decline or descent in the corresponding variable.",
		"34. To rise and fall irregularly in number or amount",
		"35. To reach the lowest point on the graph",
		"36. Places on the graph where the slope is positive",
		"37. A point in graph where values stabilize or show little to no further increase or decrease, resulting in a relatively constant trend",
		"38. to reach a maximum (in graph)",
		"39. A subsequent increase or improvement in values after a decline",
		"40. Values consistently stay at elevated levels, showing a continuous high status",
		"41. A stable position where values remain constant without significant fluctuation.",
		"42. A numerical quantity representing the magnitude of a variable",
		"43. Software designed to detect and destroy computer viruses",
		"44. A program or piece of software designed to fulfil a particular purpose",
		"45. To look at information on the Internet",
		"46. A computer program with a graphical user interface for displaying and navigating between web pages",
		"47. An error in a computer program or system (noun)",
		"48. The imparting or exchanging of information by speaking, writing, or using some other medium",
		"49. Adapt (a system, device, etc.) to be operated by computer",
		"50. To establishing a communication link or network connection between electronic devices, systems, or components, enabling data exchange or interaction",
		"51. A device for keeping two parts of an electric circuit in contact",
		"52. An information that has been translated into a form that is efficient for movement or processing",
		"53. Information or data that is represented using digits, typically in the form of binary code (0s and 1s), and is processed and stored using electronic technology",
		"54. Copy (data) from one computer system to another, typically over the internet",
		"55. A program that controls the operation of a device such as a printer or scanner",
		"56. Having or operating with components such as microchips and transistors that control and direct electric currents",
		"57. An unit of digital information storage capacity commonly used to measure the size of files or the storage capacity of electronic devices",
		"58. The machines, wiring, and other physical components of a computer or other electronic system",
		"59. A link from a hypertext document to another location, activated by clicking on a highlighted word or image",
		"60. Data as processed, stored, or transmitted by a computer",
		"61. Load (software) into a computer",
		"62. A code in a program which defines and carries out an operation",
		"63. A unit of computer memory or data equal to 1,024 bits",
		"64. Starting or initiating the execution of a program, application, or software, causing it to run (verb)",
		"65. A list of options that appears on a computer screen showing what functions/operations can be performed",
		"66. A tiny electronic component that contains a complex arrangement of transistors, resistors, and capacitors. It serves as the building block of various electronic devices",
		"67. A device used for observing, checking, or keeping a continuous record of something (noun)",
		"68. A place where power or information leaves a system (noun)",
		"69. A computer program that adds extra features to the main program (noun)",
		"70. An instance of a program being executed in a multitasking operating system (noun)",
		"71. A set of instructions written in a programming language that can be executed by a computer (noun)",
		"72. A person who writes computer programs",
		"73. The action of stopping a computer or a software application and then immediately starting it again",
		"74. The programs and other operating information used by a computer",
		"75. A computer program and a set of instructions on how to use it (noun)",
		"76. Retain or enter (information) for future electronic retrieval (verb)",
		"77. A group of related hardware units or programs or both, especially when dedicated to a single application",
		"78. The application of scientific knowledge for practical purposes, especially in industry",
		"79. Communication over a distance by cable, telegraph, telephone, or broadcasting",
		"80. A data item that may take on more than one value during the runtime of a program (noun)",
		"81. A program that can damage or cause a computer not to work properly",
		"82. A document written in hypertext (also known as HTML) that you can see online, using a web browser",
		"83. Unit of information in a computer with a value of 0 or 1",
		"84. A place, identified by a name or a number, where a piece of information is stored in a computer's memory",
		"85. A button on a computer keyboard",
		"86. A set of instructions that tells a computer what to do",
		"87. A pointing device which you move and click in order to move the cursor around a computer screen",
		"88. A sequence of letters, numbers, or characters used to identify and e-mail account or Internet site",
		"89. A code that changes electronic information so that only people who have the key can read it",
		"90. Observe and check the progress or quality of (something) over a period of time (verb)",
		"91. (of a computer or other device) produce, deliver, or supply (data) (verb)",
		"92. Operate on (data) by means of a program",
		"93. Provide (a computer or other machine) with coded instructions for the automatic performance of a task (verb)",
		"94. Able to be changed or adapted (adjective)",
		"95. The use of computer-based software to aid in design processes (the full name)",
		"96. ... is defined as any human communication that occurs through the use of two or more electronic devices (full name)",
		"97. The use of software and computer-controlled machinery to automate a manufacturing process",
		"98. Type of graph which is a visual representation of data in tabular form, often displayed with rows and columns",
		"99. A graphical display of information that changes continuously over time. There are points connecting the data to show a continuous change",
		"100. Translate (a program) from a higher-level programming language into machine code",
		"101. Fit together the separate component parts of (a machine or other object)"
	};
}

void WordArray::compare(std::string userInput, int formOfTest)
{
	if (formOfTest == 1)
	{
		if (_wordArray.at(_counter).compare(userInput) == 0)
		{
			_counter++;
			_pointCounter++;
			std::cout << YELLOW_TEXT << _pointCounter << '/' << _sentences.size() << '\n' << RESET_COLOR <<'\n';
		}
		else
		{
			std::cout << YELLOW_TEXT << "Right answer is:\t" << _wordArray.at(_counter) << '\n' << _pointCounter << '/' << _sentences.size() << '\n' << RESET_COLOR <<'\n';
			_forgottenWordsIndexes.push_back(_counter);
			_counter++;
		}
	}

	if (formOfTest == 2)
	{
		if (_wordArray.at(_forgottenWordsIndexes.at(_counter)).compare(userInput) == 0)
		{
			_forgottenWordsIndexes.erase(_forgottenWordsIndexes.begin() + _counter);
			_pointCounter++;
			std::cout << YELLOW_TEXT << _pointCounter << '/' << _forgottenWordsIndexes.size() << '\n' << RESET_COLOR << '\n';
		}
		else
		{
			std::cout << "Right answer is:\t" << _wordArray.at(_forgottenWordsIndexes.at(_counter)) << '\n' << _pointCounter << '/' << _forgottenWordsIndexes.size() << '\n' << '\n';
			_counter++;
		}
	}
}

void WordArray::writeSentence(int index)
{
	std::cout << ORANGE_TEXT << _sentences.at(index) << RESET_COLOR << '\n';
}

double WordArray::getSize()
{
	return _sentences.size();
}

int WordArray::getCounter()
{
	return _counter;
}

double WordArray::getPointCounter()
{
	return _pointCounter;
}

std::vector<int>& WordArray::getForgottenWordsIndexes()
{
	return _forgottenWordsIndexes;
}

void WordArray::reset()
{
	_counter = 0;
	_pointCounter = 0;
}

void WordArray::writeToFile()
{
	_writer = new std::ofstream(_fileName);
	if (_writer->is_open())
	{
		for (int index : _forgottenWordsIndexes) 
		{
			*_writer << index << '\n';
		}
	}
	_writer->close();
}

void WordArray::readFromFile()
{
	if (_reader->is_open())
	{
		_forgottenWordsIndexes.clear();
		int index{};
		while (*_reader >> index)
		{
			_forgottenWordsIndexes.push_back(index);
		}
	}
}

bool WordArray::isInArray(int index)
{
	for (int indexA : _forgottenWordsIndexes)
	{
		if (indexA == index)
		{
			return true;
		}
	}
	return false;
}


WordArray::~WordArray()
{
	if (_writer->is_open() && _writer)
	{
		_writer->close();
	}
	delete _writer;
	if (_reader->is_open() && _reader)
	{
		_reader->close();
	}
	delete _reader;
}