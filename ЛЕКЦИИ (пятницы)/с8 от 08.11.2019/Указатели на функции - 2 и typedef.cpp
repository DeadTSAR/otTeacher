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

typedef unsigned int uint;
uint myVar = 321;

typedef double(*numericFunctionType)(double, double);
// numericFunctionType - наш собственный тип

int main() {
	// double(*fPtr)(double, double);
	numericFunctionType fPtr;
	double x, y, choise;
	cout << "Input 2 values: ";
	cin >> x >> y;
	cout << "Input 1 for add, 2 for subtraction, 3 for multiplication" << endl;
	cin >> choise;
	if (choise == 1){
		fPtr = sum;
	}
	else if (choise == 2){
		fPtr = sub;
	}
	else if (choise == 3){
		fPtr = mult;
	}
	else {
		cout << "Invalid operation" << endl;
		return 0;
	}

	cout << "Result = " << fPtr(x, y);

	return 0;
}
