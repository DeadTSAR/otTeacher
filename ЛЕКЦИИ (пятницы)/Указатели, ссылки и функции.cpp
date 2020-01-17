//// ConsoleApplication71.cpp: определ¤ет точку входа дл¤ консольного приложени¤.
////
//// ConsoleApplication71.cpp: определ¤ет точку входа дл¤ консольного приложени¤.
////



#include "stdafx.h"
#include <iostream>
using namespace std;

// bad, передача копии 
void f1(int x){
	x = x + 1; // мен¤етс¤ копи¤, исходное значение остаЄтс¤
}

// передача ссылки 
void f2(int &x){
	x = x + 1; // мен¤етс¤ копи¤, исходное значение остаЄтс¤
}

void f3(int *x){
	*x = *x + 1;
}

int main(){
	setlocale(LC_CTYPE, "Rus");
	
	int a = 967, b = 654, c = 760, d = 1000;
	f1(a);
	cout << "a = " << a << endl;
	f2(a);
	cout << "a = " << a << endl;
	f3(&a);
	cout << "a = " << a << endl;

	int &aa = a;
	cout << "a = " << a << endl;
	cout << "aa = " << aa << endl;

	a += 1;
	cout << "a = " << a << endl;
	cout << "aa = " << aa << endl;

	aa = 99;
	cout << "a = " << a << endl;
	cout << "aa = " << aa << endl;

	return 0;
}