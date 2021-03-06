﻿// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <algorithm> // подключаем STL для shuffle
using namespace std;


int main()
{
	int K[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // создаём массив К с разными элементами
	random_shuffle(K, K + 10); // перемешиваем элементы массива K
	cout << "K elements: ";
	for (int & element : K) {
		cout << element << '\t';
	}
	cout << endl;

	// проинициализировали массив T
	int T[10];
	for (int i = 0; i < 10; i++) {
		T[K[i]] = i;
	}
	cout << "T elements: ";
	for (int & element : T) {
		cout << element << '\t';
	}
	cout << endl;

	const int M = 30;
	int X[M], Y[M];
	cout << "X elements: ";
	for (int i = 0; i < M; i++) {
		X[i] = rand() % 10; // помещаем в каждый элемент массива X число от 0 до 9 
		cout << X[i] << '\t';
	}
	cout << endl;

	cout << "Y elements: ";
	for (int i = 0; i < M; i++) {
		Y[i] = i - K[X[i]]; // помещаем в каждый элемент массива Y значение по правилу из задания
		cout << Y[i] << '\t';
	}
	cout << endl;

	int P[30];
	cout << "P elements (decoded): ";
	for (int i = 0; i < M; i++) {
		P[i] = T[i - Y[i]];
		cout << P[i] << '\t';
	}
	cout << endl;
}

