#include "stdafx.h"
#include "Member.h"

using namespace std;

Member::Member(MemberField first, MemberField second){
	this->firstName = first;
	this->secondName = second;
};
MemberField Member::getFirstName(){
	return this->firstName;
};
MemberField Member::getSecondName(){
	return this->secondName; 
};

Member::~Member(){

};
