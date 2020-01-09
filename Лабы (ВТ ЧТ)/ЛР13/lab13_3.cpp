#include "stdafx.h"
#include <iostream>
using namespace std;
/* Пример наследования
*/
class A {
	// Базовый класс
	protected:
	int a;	
	A() { 
		cout<<"Работает пустой конструктор класса A\n";
		a = 0; 
	}
	A(int a0){
		cout<<"Работает специальный конструктор класса A\n";
		a=a0;
	}
};

class B: public A {
	// Производный класс
	private:
	int b;
	public:
	// Явный вызов конструктора класса A
	B(int a0, int b0):A(a0){ 
		cout<<"Работает конструктор класса B\n";
		b=b0;
	}

	void prnt(){
		cout<<"A="<<a<<"\tB="<<b<<endl;
	}
};

int main (){
	setlocale(LC_ALL,"Russian"); 

	B X(10,20),Y(30,40);
	X.prnt();
	Y.prnt();
	char c; cin>>c;
	return 0;
}