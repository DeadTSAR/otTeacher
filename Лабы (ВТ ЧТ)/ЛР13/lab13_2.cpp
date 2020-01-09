#include "stdafx.h"
#include <iostream>
using namespace std;
/* Пример наследования
*/
class A {
	// Базовый класс
	protected:
	int a;
	A() { a = 0; }
};

// Процесс наследования
class B: public A {
	// Производный класс
	public:
	int b;
	B(){ b=0;}
	void prnt(){
		cout<<"A="<<a<<"\tB="<<b<<endl;
	}
};
class C {
	B klb;
	public: 
		C() {klb.b=7; cout<<klb.b;}
};

int main (){
	B X,Y;
	C Z;
	//X.a=10; X.b=20;
	//X.prnt();
	//Y.a=30; Y.b=40;
	//Y.prnt();
	char c; cin>>c;
	return 0;
}