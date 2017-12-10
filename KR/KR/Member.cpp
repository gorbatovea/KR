#include "stdafx.h"
#include "Member.h"

using namespace std;

Member::Member(MemberField first, MemberField second){
	this->firstName = first;
	this->secondName = second;
};

long long Member::hash(){
	long long result = 0;
	for (int i = 0; i < this->firstName.getField().size(); i++){
		result += this->firstName.getField()[i];
	}
	for (int i = 0; i < this->secondName.getField().size(); i++){
		result += this->secondName.getField()[i];
	}
	return result;
};

MemberField Member::getFirstName(){
	return this->firstName;
};
MemberField Member::getSecondName(){
	return this->secondName; 
};

Member::~Member(){
	this->firstName.~MemberField();
	this->secondName.~MemberField();
};
