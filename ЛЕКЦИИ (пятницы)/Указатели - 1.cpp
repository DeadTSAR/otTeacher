//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////
//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////



#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	
	int a = 967, b = 654, c = 760, d = 1000;

	int *pa = &a;
	cout << "*pa = " << *pa << endl;
	cout << "*pa = " << *(pa-1) << endl;
	cout << "*pa = " << *(pa-2) << endl;
	cout << "*pa = " << *(pa-3) << endl;
	cout << "*pa = " << *(pa-4) << endl;
	cout << "*pa = " << *(pa-5) << endl;
	cout << "*pa = " << *(pa-6) << endl;

	return 0;
}