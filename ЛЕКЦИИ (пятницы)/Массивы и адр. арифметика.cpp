//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////
//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////



#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	const int N = 10;

	int mas[N];

	mas[0] = 55;
	*(mas + 1) = 60;
	for (int i = 2; i < N; i++){
		*(mas + i) = 100;
	}

	for (int i = 0; i < N; i++){
		cout << *(mas + i) << endl;
		//cout << mas[i] << endl;
	}
	

	return 0;

}