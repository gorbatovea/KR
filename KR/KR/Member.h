#ifndef MEMBER_H
#define MEMBER_H

#include "MemberField.h"
#include "AbstractMember.h"

using namespace std;

class Member: public AbstractMember<MemberField>{
private:
	MemberField firstName;
	MemberField secondName;
public:
	Member(MemberField first, MemberField second);
//	Member(string first, string second);
	MemberField getFirstName();
	MemberField getSecondName();
	~Member();
};

#endif