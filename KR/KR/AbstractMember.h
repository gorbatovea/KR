#ifndef ABSTRACT_MEMBER_H
#define ABSTRACT_MEMBER_H

template<typename T>
class AbstractMember{
public:
	virtual T getFirstName() = 0;
	virtual T getSecondName() = 0;
};

#endif