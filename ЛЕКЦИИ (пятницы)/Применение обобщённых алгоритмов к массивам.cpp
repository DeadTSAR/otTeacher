//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////
//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////



#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

#define M 30
int mult = 2;

/*
int * f(int n){
	int * massiv = new int[n]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	return massiv;
}
*/

int main(){
	/*
	int * mas;
	mas = f(10);
	for (int i = 0; i < 10; i++){
		cout << mas[i];
	}
	*/

	setlocale(LC_CTYPE, "Rus");
	const int N = 10;
	cout << "&N = " << &N << endl;
	//cout << "&M = " << &M << endl;

	int arr[N];
	cout << "Size of arr array = " << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "Enter the array: ";
	for (int i = 0; i < N; i++){
		cin >> arr[i];
	}

	cout << "Enter the threshold: ";
	int threshold;
	cin >> threshold;

	cout << "Значений больших заданного = " <<
		std::count_if(arr, arr + N, [threshold, N](int val){return val > threshold; }) << endl;

	cout << "Минимальный элемент: " << *min_element(arr, arr + N) << endl;
	int minElement = *min_element(arr, arr + N);
	cout << "Минимальный элемент: " << minElement << endl;

	int min = arr[0];
	for (int i = 0; i < N; i++){
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "Минимальный элемент: " << min << endl;

	sort(arr, arr + N);
	cout << "Массив после сортировки: " << endl;
	//for (int i = 0; i < N; i++){
	//	cout << arr[i] << '\t';
	//}

	for (int item : arr){
		cout << item << '\t';
	}

	for_each(arr, arr + N, [](int value){cout << value << '\t'; });

	return 0;

}