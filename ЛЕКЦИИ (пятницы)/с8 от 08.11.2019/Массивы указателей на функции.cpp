// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdarg>
#include <string>
using namespace std;

double sum(double a, double b){
	return a + b;
}

double sub(double a, double b){
	return a - b;
}

double mult(double a, double b){
	return a * b;
}

typedef double(*numericFunctionType)(double, double);
// numericFunctionType - наш собственный тип

int main() {
	//double(*fPtr[])(double, double) = { sum, sub, mult };
	numericFunctionType fPtr[3] = {sum, sub, mult};
	double x, y;
	int choise;
	cout << "Input 2 values: ";
	cin >> x >> y;
	cout << "Input 1 for add, 2 for subtraction, 3 for multiplication" << endl;
	cin >> choise;

	cout << "Result = " << fPtr[choise - 1](x, y);

	return 0;
}
