// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
//
// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	cout << (int)'�' << endl;
	cout << (unsigned int)'�' << endl;
	cout << int('�') << endl;
	cout << static_cast<int>('�') << endl;

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

