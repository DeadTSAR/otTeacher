#include "stdafx.h"
#include <iostream>
using namespace std;

struct myClass{
	int a;
	int b;


	myClass()
		:a(5), b(a + 7)
	{
		a += 1;
		b += 2;
	}

	myClass(const myClass& mc)
		:a(mc.a), b(mc.b)
	{}

	~myClass(){
		cout << "Destructor" << endl;
	}

};

void f(){
	myClass MC4;
} // Destructor

int main()
{
	f();

	{
		myClass MC3;
	} // Destructor

	myClass * pMC = new myClass[8];
	delete[] pMC; // Destructor

	myClass MC1;
	cout << "a = " << MC1.a << " b = " << MC1.b << endl;
	MC1.~myClass();
	MC1.~myClass();
	MC1.~myClass();
	cout << "a = " << MC1.a << " b = " << MC1.b << endl;

	myClass MC2(MC1);
	cout << "a = " << MC1.a << " b = " << MC1.b << endl;

	getchar();
	return 0;
}
