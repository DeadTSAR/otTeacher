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
	int iter = 0;
	do{
		cout << "Введите значение от 10 до 99: ";
		cin >> i;
		if (i < 10 || i > 99){
			cout << "Ошибка! Неверный диапазон. ";
			continue;
		}
		
		cout << "Сумма цифр числа: " << i / 10 + i % 10 << endl;
		iter++;

	} while (iter < 5);

	cout << "Ура! Вы ввели верное значение";

	return 0;
}

