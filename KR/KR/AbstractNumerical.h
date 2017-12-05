#ifndef ABSTRACTNUMERICAL_H
#define ABSTRACTNUMERICAL_H

class AbstractNumerical{
public:
	virtual int getDigit(const int index) = 0;
	virtual int getDigitMaxValue(void) = 0;
	virtual int getDigitCount(void) = 0;
};

#endif