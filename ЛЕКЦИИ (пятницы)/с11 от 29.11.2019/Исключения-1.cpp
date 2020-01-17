// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a, b;
	cout << "Input numerator and denominator: ";
	cin >> a >> b;
	try{
		if (a == 10)
			throw 3.5;
		if (a == 0 && b == 0)
			throw string("Indeterminacy");
		if (b == 0)
			throw 0;
		cout << "Result = " << a * 1.0 / b << endl;
	}
	catch (const int){
		cout << "Division by zero" << endl;
	}
	catch (const string str){
		cout << "Message: " << str << endl;
	}
	catch (...){
		cout << "Unexpected exception" << endl;
	}

	return 0;
}