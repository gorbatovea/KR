#include "stdafx.h"
#include "MemberField.h"

using namespace std;


const int MemberField::DIGIT_COUNT = 'z' - 'a' + 1;
const int MemberField::MIN_DIGIT_VALUE = 'a' - 1;

MemberField::MemberField(){
	return;
};

MemberField::MemberField(string inputData){
	PATTERN[0] = 'a';
	PATTERN[1] = 'z';
	if (inputData.length() == 0) {
		throw (IllegalArgumentException);
	}
	if (!this->matches(inputData))
		throw(IllegalArgumentException);
	data = inputData;
	this->length = inputData.length();
};

const bool MemberField::matches(string data){
	for (int i = 0; i < data.size(); i++){
		if ((data.at(i) < PATTERN[0]) || (data.at(i) > PATTERN[1])) return false;
	}
	return true;
};

string MemberField::getField(){
	return this->data;
}

int MemberField::getDigit(const int index){
	if (index < 0) {
		throw this->IndexOutOfBoundsException;
	}
	else if (index >= getDigitCount()) {
		return MIN_DIGIT_VALUE;
	}
	else {
		return data.at(index) - MIN_DIGIT_VALUE;
	}
};
int MemberField::getDigitMaxValue(void){
	return DIGIT_COUNT;
};
int MemberField::getDigitCount(void){
	return length;
};

MemberField MemberField::operator= (MemberField& instance){
	this->data = instance.data;
	this->length = instance.length;
	return MemberField(instance.data);
};

MemberField::~MemberField(){
	this->data.clear();
};