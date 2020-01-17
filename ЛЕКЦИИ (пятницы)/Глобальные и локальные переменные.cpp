// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int i = 20; //global

int main(){
	setlocale(LC_CTYPE, "Rus");

	int i = 50;
	if (true)
	{
		int i = 100;
		cout << i << endl;
		cout << "global: " << ::i << endl;
	}

	cout << i << endl;
	cout << "global: " << ::i << endl;

	return 0;
}

