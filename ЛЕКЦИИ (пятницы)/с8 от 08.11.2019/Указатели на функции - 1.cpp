// ConsoleApplication72.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdarg>
#include <string>
using namespace std;

//void print(){
//	cout << "Hello" << endl;
//}

void print(void){
	cout << "Hello" << endl;
}

void print2(void){
	cout << "Hello, world" << endl;
}

int main() {
	print();				// ����� �������
	cout << print << endl;	// �������� ����� �������

	void(*functionPointer)(void);
	functionPointer = print;
	functionPointer();		// ����� �������
	cout << functionPointer << endl;

	functionPointer = print2;
	functionPointer();		// ����� �������
	cout << functionPointer << endl;

	return 0;
}
