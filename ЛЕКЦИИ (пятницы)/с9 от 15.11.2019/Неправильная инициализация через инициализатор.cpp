#include "stdafx.h"
#include <iostream>
using namespace std;

struct myClass{

	int b;
	int a;	

	myClass()
		:a(5), b(a + 7)
	{}

	myClass(const myClass& mc)
		:a(mc.a), b(mc.b)
	{}

};

int main()
{
	myClass MC1;
	cout << "a = " << MC1.a << " b = " << MC1.b << endl;

	myClass MC2(MC1);
	cout << "a = " << MC1.a << " b = " << MC1.b << endl;

	getchar();
	return 0;
}
