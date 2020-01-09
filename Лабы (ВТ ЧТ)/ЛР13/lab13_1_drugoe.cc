#include "stdafx.h"
#include<iostream>
using namespace std;
/* Пример наследования
*/
class A {
	// Базовый класс
	protected:
	int a;
	A() { a = 0; }
	int getA () {
	a=8;
	return a;
	} 
};

// Процесс наследования
class B:  public A {
	// Производный класс
	public:
	int b;
	B(){ b=0; a=5;}
	void prnt(){
		cout<<"A="<<a<<"\tB="<<b<<endl;
	}
};
class C: B {
public:
	//C () {a=76;}
void prnt2(){
	cout<<"A="<<getA()<<endl; }

};

int main (){
	C X;
	//cout<<X.getA();
	//X.a=10; X.b=20;
	X.prnt2();
	//Y.a=30; Y.b=40;
	//Y.prnt();
	char c; cin>>c;
	return 0;
}