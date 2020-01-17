// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdarg>
#include <string>
using namespace std;

void ArrInput(int ** mas, int n, int m){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			cin >> mas[i][j];
	}
	return;
}

void ArrOutput(int ** mas, int n, int m){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			cout << mas[i][j] << ' ';
		cout << endl;
	}
	return;
}

bool findMin(int left, int right){
	return left < right;
}

bool findMax(int left, int right){
	return left > right;
}

pair<int, int> findIndex(int ** mas, int n, int m, bool(*compareF)(int, int)){
	pair<int, int> Index = { 0, 0 };
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (compareF(mas[i][j], mas[Index.first][Index.second]))
				Index = { i, j };
		}
	}
	return Index;
}

void changeMaxAndMinRows(int ** mas, int n, int m){
	pair<int, int> MinIndex = findIndex(mas, n, m, findMin);
	pair<int, int> MaxIndex = findIndex(mas, n, m, findMax);

	/*
	for (int j = 0; j < m; j++){
		swap(mas[MinIndex.first][j], mas[MaxIndex.first][j]);
	}
	*/

	swap(mas[MinIndex.first], mas[MaxIndex.first]);
}

int main() {
	int n, m;
	cout << "Input size of the matrix (rows and cols): ";
	cin >> n >> m;

	int ** arr = new int *[n];
	for (int i = 0; i < n; i++){
		arr[i] = new int [m];
	}

	ArrInput(arr, n, m);
	cout << endl;
	
	ArrOutput(arr, n, m);
	cout << endl;

	changeMaxAndMinRows(arr, n, m);
	
	ArrOutput(arr, n, m);
	return 0;
}
