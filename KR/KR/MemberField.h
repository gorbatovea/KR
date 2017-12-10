#ifndef MEMBERFIELD_H
#define MEMBERFIELD_H

#include "AbstractNumerical.h"

using namespace std;

class MemberField: public AbstractNumerical{
private:
	char PATTERN[2];
	static const int DIGIT_COUNT;
	static const int MIN_DIGIT_VALUE;
	string data = " ";
	int length;

	const bool matches(string data);

public:
	static const enum exceptions{
		IllegalArgumentException,
		IndexOutOfBoundsException
	};

	MemberField();
	MemberField(string data);
	string getField();
	int getDigit(const int index);
	int getDigitMaxValue(void);
	int getDigitCount(void);
	MemberField operator= (MemberField& instance);
	~MemberField();
};

#endif