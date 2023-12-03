#pragma once
#include "WordArray.h"

class PercentageScale
{
private:
	double _percentage = 0;

public:
	void setPercentage(WordArray& knownWords);
	void writeFinalMark();

};

