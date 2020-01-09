// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#include <vector>

int main(){
	cout << (int)'a' << endl;
	cout << (unsigned int)'a' << endl;
	cout << int('a') << endl;
	cout << static_cast<int>('a') << endl;

	cout << (int)'ы' << endl;
	cout << (unsigned int)'ы' << endl;
	cout << int('ы') << endl;
	cout << static_cast<int>('ы') << endl;

	vector<int> v(3, -3);
	//{-3, -3, -3};
	int sum = 0;
	for (int item : v){
		sum += item;
	}
	// sum == -9
	cout << "Mean value == " << sum / int(v.size()) << endl;

	for (unsigned int i = 10 + 1; i > 0; i--){
		int j = i - 1;
		cout << j << endl;
	}

	return 0;
}

