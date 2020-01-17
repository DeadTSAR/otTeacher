// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	int i;
vvod:
	cout << "Введите значение от 10 до 99: ";
	cin >> i;
	if (i < 10 || i > 99){
		cout << "Ошибка! Неверный диапазон. ";
		goto vvod;
	}

	cout << "Ура! Вы ввели верное значение";

	return 0;
}
