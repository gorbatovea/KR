#include "stdafx.h"
#include "DataBase.h"

DataBase::DataBase(){
	this->list = new vector<Member>();
};

Member DataBase::get(const int index){
	if ((index < 0) || (index > this->list->size())) throw this->EmptyBaseException;
	return this->list->at(index);
};

void DataBase::add(Member element){
	this->list->push_back(element);
};

int DataBase::size(){
	return this->list->size();
};

void DataBase::merge(DataBase instance){
	for (int i = 0; i < instance.size(); i++){
		this->list->push_back(instance.get(i));
	}
};

void println(DataBase& dataBase, const char splitter){
	for (int i = 0; i < dataBase.list->size(); i++){
		cout << (string)dataBase.list->at(i).getFirstName().getField() << splitter << (string)dataBase.list->at(i).getSecondName().getField() << endl;
	}
};

DataBase::~DataBase(){
	delete[](this->list);
};