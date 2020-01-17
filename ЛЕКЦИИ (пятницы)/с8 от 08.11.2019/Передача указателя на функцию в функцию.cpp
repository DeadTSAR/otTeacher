// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdarg>
#include <string>
using namespace std;
/*
//1
void selectionSort(double * mas, int N){
	for (int i = 0; i < N - 1; i++){
		int index = i;

		for (int j = i + 1; j < N; j++){
			if (mas[j] < mas[index]){
				index = j;
			}
		}

		swap(mas[i], mas[index]);
	}
}
//{4, 8, -1, 6, -2}
//{-2, 8, -1, 6, 4}
//{-2, -1, 8, 6, 4}
*/

typedef bool(*sortType)(double, double);

bool ascendingSort(double left, double right){
	return left < right ? true : false;
}

bool descendingSort(double left, double right){
	//return left < right ? false : true;
	return ascendingSort(right, left);
}

void selectionSort(double * mas, int N, sortType sortTypeFunc){
	for (int i = 0; i < N - 1; i++){
		int index = i;

		for (int j = i + 1; j < N; j++){
			if (sortTypeFunc(mas[j], mas[index])){
				index = j;
			}
		}

		swap(mas[i], mas[index]);
	}
}

int compareFunction(const void * left, const void * right){
	//return *((double *)left) - *((double *)right);

	double * leftPtr = (double *)left;
	double * rightPtr = (double *)right;
	return *leftPtr - *rightPtr;

}

int compareFunction2(const void * left, const void * right){
	return -compareFunction(left, right);
}

int main() {
	const int N = 10;
	double arr[N] = { 5, 4.1, 4.5, 4, 8, -100, 0, -1, 6, -2 };
	
	/*
	qsort(arr, N, sizeof(double), compareFunction2);
	*/
	
	selectionSort(arr, N, descendingSort);
	
	for (const double & item : arr){
		cout << item << endl;
	}

	return 0;
}
