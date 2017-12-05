#ifndef ABSTRACTDATABASE_H
#define ABSTRACTDATABASE_H

template<typename T>
class AbstractDataBase{
public:
	virtual T get(const int index) = 0;
	virtual void add(T element) = 0;
	virtual int size() = 0;
};

#endif