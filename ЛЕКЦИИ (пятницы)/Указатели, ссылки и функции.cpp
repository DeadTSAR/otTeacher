//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////
//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////



#include "stdafx.h"
#include <iostream>
using namespace std;

// bad, �������� ����� 
void f1(int x){
	x = x + 1; // �������� �����, �������� �������� �������
}

// �������� ������ 
void f2(int &x){
	x = x + 1; // �������� �����, �������� �������� �������
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