// KR.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "MemberField.h"
#include "DataBase.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]){

	ifstream fin("input.txt", ifstream::in);
	ofstream fout("output.txt", ofstream::out);

	try{
		string str1, str2;
		char buf[1];
		while (fin.good()){
			fin.read(buf, 1);
			if (buf[0] == ' ') break;
			else str1.push_back(buf[0]);
		}
		while (fin.good()){
			fin.read(buf, 1);
			if (buf[0] == ' ') break;
			else str2.push_back(buf[0]);
		}


		DataBase* base = new DataBase();
		base->add(Member(string("egor"), string("gorbatov")));
		Member newMember{ string("name"), string("soname") };
		base->add(newMember);
		base->add(Member(str1, str2));
		println(*base, ' ');
		for (int i = 0; i < base->size(); i++){
			fout << base->get(i).hash() << endl;
		}
	}
	catch (MemberField::exceptions IllegalArgumentException){
		printf("IllegalArgumentException\n");
		getchar();
		return 1;
	}
	fin.close();
	fout.close();
	getchar();
	return 0;
}

