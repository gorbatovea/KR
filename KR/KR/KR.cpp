// KR.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "MemberField.h"
#include "DataBase.h"

using namespace std;

void printlnDataBase(DataBase instance, char splitter){
	for (int i = 0; i < instance.size(); i++){
		cout << (string)instance.get(i).getFirstName().getField();//<< splitter << (string)instance.get(i).getSecondName().getField() << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	string name = "abc", soName = "abc";
	try{
		DataBase base;
		MemberField m1((string)"egor");
		MemberField m2((string)"gorbatov");
		Member m(m1, m2);
		base.add(m);
		printlnDataBase(base, ' ');
	}
	catch (MemberField::exceptions IllegalArgumentException){
		printf("IllegalArgumentException\n");
		_getch();
		return 1;
	}
	_getch();
	return 0;
}

