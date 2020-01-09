// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>
using namespace std;

int i = 20; //global

int mai0n(){
	cout << "Enter 3 integers\n";
	vector<int> vect;
	for (int i = 0; i < 3; i++){
		int value;
		cin >> value;
		vect.push_back(value);
	}
	cout << "Max = " << *max_element(begin(vect), end(vect));

	/*
	int max = 0;
	if (a >= b && a >= c) { max = a; }
	else if (b >= a && b >= c) { max = b;}
	else { max = c;}

	cout << max << endl;
	*/

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int max = a;
	if (b > max){
		max = b;
	}
	if (c > max){
		max = c;
	}
	if (d > max){
		max = d;
	}
	if (e > max){
		max = e;
	}
	cout << "max(a, b, c, d, e) = " << max << endl;

	int mas[5]; //0..4
	for (int i = 0; i < 5; i++){
		cin >> mas[i];
	}
	cout << "Max = " << *max_element(begin(mas), end(mas));
	max = mas[0];
	for (int i = 0; i < 5; i++){
		if (mas[i] > max){
			max = mas[i];
		}
	}
	cout << "max(max) = " << max << endl;

	//Python
	//if (5 < x < 100) -> if (5 < x && x < 100)
	//if (x < -10 || x > 10), if (!(x >= -10 && x <= 10))

	//// C++ 17
	//if (initializer; condition){

	//}
	//// std = 1z
	//if (int cnt = count(mas); cnt > 0){

	//}

	return 0;
}

