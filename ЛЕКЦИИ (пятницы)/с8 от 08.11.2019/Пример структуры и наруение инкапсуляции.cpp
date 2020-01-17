// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <algorithm> // подключаем STL для shuffle
using namespace std;

struct myPairType{
	int first, second;
};

struct myStructType{
public:
	int a = 567;
private:
	int b = -123;
protected:
	int c = 908;
};

int main()
{
	//myPairType p1 = { 23, 45 };
	myPairType p1;
	p1 = { 23, 45 };
	p1.first = 23;
	p1.second = 45;

	myPairType *ptr1 = &p1;
	ptr1->first = 24;
	(*ptr1).second = 46;

	cout << "p1.first = " << p1.first
		<< " p1.second = " << p1.second << endl;

	myStructType s1;
	cout << "s1.a = " << s1.a << endl;
	
	int * ptra = &s1.a;
	cout << "s1.b = " << *(ptra + 1) << endl;
	cout << "s1.c = " << *(ptra + 2) << endl;
	*(ptra + 1) = -10000;
	cout << "s1.b = " << *(ptra + 1) << endl;
}

