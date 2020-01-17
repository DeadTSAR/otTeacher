// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <algorithm> // подключаем STL для shuffle
using namespace std;

class point;

class line{
	double x1, x2;
public:
	line(double xx1, double xx2)
		:x1(xx1), x2(xx2) {}
	friend bool isInLine(line &, point &);
};

class point{
	double x;
public:
	point(double xx)
		:x(xx) {}
	friend bool isInLine(line &, point &);
};

bool isInLine(line & L, point & P){
	if (L.x1 < L.x2 &&
		L.x1 < P.x &&
		P.x < L.x2)
		return true;
	else
	if (L.x1 > L.x2 &&
		L.x1 > P.x &&
		P.x > L.x2)
		return true;
	else
		return false;
}

// ПРИМЕР КОНСТАНТНОГО ПОЛЯ
class C{
public:	
	const int i;
	C(int ii = 0)
		:i(ii)
	{
		//wrong
		//i = 5;
	}
};

//ПРИМЕР THIS
class IntPair{
public:
	int first;
	int second;
	int GetMult(){
		return this->first * this->second;
	}
};

int main(){
	IntPair IntPair1;
	IntPair1.first = 5;
	IntPair1.second = 6;
	cout << "IntPair1.GetMult() = " << IntPair1.GetMult() << endl;

	IntPair IntPair2;
	IntPair2.first = 50;
	IntPair2.second = 60;
	cout << "IntPair2.GetMult() = " << IntPair2.GetMult() << endl;

	C C1;
	cout << C1.i << endl;
	C C2(5);
	cout << C2.i << endl;

	point P(9);
	line L(-10, 20);
	if (isInLine(L, P)){
		cout << "The dot is in the line\n";
	}
	else{
		cout << "The dot is NOT in the line\n";
	}
}