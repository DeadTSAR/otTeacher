//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////
//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////



#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

void PrintArrayRec(int *mas, int NN, int current = 0){
	cout << mas[current] << '\t';
	if (current < NN - 1)
		PrintArrayRec(mas, NN, current + 1);
	//else
	//	return;
}

inline void PrintArrayNONRec(int *mas, int NN){
	for (int i = 0; i < NN; i++){
		cout << mas[i] << '\t';
	}
}

int FindMaxElementRec(int *mas, int NN, int current = 0){
	if (current == NN - 1)
		return mas[current];
	else
		return mas[current] > FindMaxElementRec(mas, NN, current + 1) ?
		       mas[current] : FindMaxElementRec(mas, NN, current + 1);
}

int main(void){
	int N = 5;
	int fact = 1;
	for (int i = 1; i <= N; i++)
		fact = fact * i;

	// fact = 1 * 1 * 2 * 3 * 4 * 5 = 120

	const int NN = 5;
	int mas[NN] = { 1, 55, 3, 99, 5 };
	PrintArrayRec(mas, NN);
	cout << "Max element = " << FindMaxElementRec(mas, NN) << endl;

	return 0;

}