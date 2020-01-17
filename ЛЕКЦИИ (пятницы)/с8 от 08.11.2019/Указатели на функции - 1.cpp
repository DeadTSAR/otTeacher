// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
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
	print();				// вызов функции
	cout << print << endl;	// печатаем адрес функции

	void(*functionPointer)(void);
	functionPointer = print;
	functionPointer();		// вызов функции
	cout << functionPointer << endl;

	functionPointer = print2;
	functionPointer();		// вызов функции
	cout << functionPointer << endl;

	return 0;
}
