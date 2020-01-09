#include "stdafx.h"
#include<iostream>
using namespace std;
/* Пример наследования
*/
class A {
	// Базовый класс
	public:
	int a;
	static int pr;
	A() { a = 0; }
};
int A::pr=0;
// Процесс наследования
class B: public A {
	// Производный класс
	public:
	int b;
	B(){ b=0; pr++;}
	void prnt(){
		cout<<"A="<<a<<"\tB="<<b<<"\tpr= "<<pr<<endl;
	}
};
class C: B {
	C(){cout<<a;
	}
};

int main (){
	B X,Y;
	X.a=10; X.b=20;
	X.prnt();
	A Q=(A)X;
	cout<<Q.a;
	Y.a=30; Y.b=40;
	Y.prnt();
	//B Z=(B)Q;
	char c; cin>>c;
	return 0;
}