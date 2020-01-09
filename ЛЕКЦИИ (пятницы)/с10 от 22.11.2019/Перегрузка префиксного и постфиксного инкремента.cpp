// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <algorithm> // подключаем STL для shuffle
using namespace std;

class field{
public:
	int f;
	field& operator++(){
		f++;
		return *this;
	}
	field operator++(int){
		field field_old = *this;
		f++;
		return field_old;
	}
	friend ostream& operator<<(ostream& out, const field& fil);
};

ostream& operator<<(ostream& out, const field& fil){
	cout << "Field = " << fil.f << endl;
	return out;
}


int _tmain(int argc, _TCHAR* argv[])
{
	field field1;
	field1.f = 5;
	cout << ++field1;
	cout << ++field1;
	cout << field1++;
	cout << field1++;
	cout << field1;
	return 0;
}
