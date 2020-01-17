// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

class cl{
	int a;
	double b;
	char c;
public:
	cl(int aa = 0, double bb = 0.0, char cc = '\0')
		:a(aa), b(bb), c(cc)
	{}
	cl & operator =(const cl & right){
		cout << "operator =" << endl;
		a = right.a;
		b = right.b;
		c = right.c;
		return *this;
	}
	void print(){
		cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	}
};

int main(){
	cl A(1, 2.2, '#');
	cl B, C;
	C = B = A;
	C = C;
	C.print();
	cl D(C);

	int i1, i2, i3, i4;
	i4 = 4;
	i1 = i2 = i3 = i4;
	cout << "i1 = " << i1 << endl;

	vector<int> v1(5, 55), v2;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	v2 = v1;
	v2.at(0) = 10;
	v2.at(1) = 100;
	v2.at(2) = 1000;

	for (const auto & item : v1){
		cout << item << ' ';
	}
	cout << endl;
	for (const auto & item : v2){
		cout << item << ' ';
	}
	return 0;
}