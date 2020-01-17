// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <algorithm> // подключаем STL для shuffle
using namespace std;

class IntPair{
public:
	int first;
	int second;
	int GetMult(){
		return this->first * this->second;
	}
	IntPair(int f = 0, int s = 0)
		:first(f), second(s)
	{}
};

IntPair operator * (const IntPair & left, const IntPair & right){
	return IntPair(left.first * right.first, left.second * right.second);
}

IntPair operator * (const IntPair & left, int i){
	return IntPair(left.first * i, left.second * i);
}

int main()
{
	string name("Vitaliy"), fname("Ivanov");
	cout << (name + ' ' + fname);

	IntPair ip1(2, 5), ip2(3, 6), ip3;
	ip3 = ip1 * ip2; // first = 6, second = 30
	//ip3 = operator*(ip1, ip2);
	cout << "ip3.first = " << ip3.first << endl;
	cout << "ip3.second = " << ip3.second << endl;

	ip3 = ip3 * 4;
	//ip3 = operator*(ip3, 4);
	cout << "ip3.first = " << ip3.first << endl;
	cout << "ip3.second = " << ip3.second << endl;

	// с explicit-constructor невозможно
	// ip3 = 4 * ip3; 
	ip3 = IntPair(4) * ip3;
	cout << "ip3.first = " << ip3.first << endl;
	cout << "ip3.second = " << ip3.second << endl;

	return 0;
}
