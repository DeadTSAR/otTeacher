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

	~myClass(){
		cout << "Destructor" << endl;
	}

private:	
	myClass& operator=(const myClass& mc){
		a = mc.a;
		b = mc.b;
		return *this;
	}
	myClass(const myClass& mc)
		:a(mc.a), b(mc.b)
	{}
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
	MC1.a = 11;
	MC1.b = 12;
	cout << "a = " << MC1.a << " b = " << MC1.b << endl;

	myClass MC2;//(MC1);
	//MC2 = MC1;
	cout << "a = " << MC2.a << " b = " << MC2.b << endl;

	getchar();
	return 0;
}
