// ConsoleApplication5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <algorithm> // ���������� STL ��� shuffle
using namespace std;

class A{};

struct sportsman{
	int age;
	int height;
	string name;
};

int main()
{
	cout << sizeof(A) << endl;
	// �����������
	//sportsman mas[10];

	// ������������
	sportsman * mas = new sportsman[4];
	for (int i = 0; i < 4; i++){
		cout << "Input sportsman's data: ";
		cin >> mas[i].name >> mas[i].age >> mas[i].height;
	}

	sportsman maxSp;
	maxSp = mas[0];
	for (int i = 0; i < 4; i++){
		if (mas[i].age > maxSp.age){
			maxSp = mas[i];

			//maxSp.name = mas[i].name;
			//maxSp.age = mas[i].age;
			//maxSp.height = mas[i].height;

		}
	}

	cout << "Info: " << maxSp.name << ' ' << maxSp.age << endl;

	delete[] mas;

}

