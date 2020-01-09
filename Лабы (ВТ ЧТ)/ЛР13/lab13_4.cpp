#include "stdafx.h"
#include <iostream>
using namespace std;
/* Требуется перегрузка операторов
*/
class base {
	// Базовый класс
	public:
		double x;
	 base() { x = 0; }
	 base(double a) { x = a; }
	 base operator+(base a){
		 base d;
		 d.x=x+a.x;
		 return d;
	 }
	 void prnt(){
		 cout<<"resoult="<<x<<endl;
	 }
};

class derived: public base {
	// Производный класс
	public:
	derived(){}
	derived(double a):base(a){}
	// Перегрузка оператора
	derived operator+(derived a){
		 derived d;
		 d.x=x+a.x;
		 return d;
	 }

};

int main (){
	derived  X(10),Y(20),Z;
	Z=X+Y;
	Z.prnt();
	char c; cin>>c;
	return 0;
}