// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <algorithm> // подключаем STL для shuffle
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
	// статический
	//sportsman mas[10];

	// динамический
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

