#ifndef DATABASE_H
#define DATABASE_H

#include "AbstractDataBase.h"
#include "Member.h"

using namespace std;

class DataBase : public AbstractDataBase<Member>{
private:
	enum exceptions{
		EmptyBaseException
	};
protected:
	vector<Member>* list;
public:
	DataBase();
	Member get(const int index);
	void add(Member element);
	void merge(DataBase instance);
	int size();
	friend void sort(DataBase& dataBase);
	~DataBase();
};

#endif