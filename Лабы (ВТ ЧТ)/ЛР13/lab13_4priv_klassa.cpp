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
		 d.x=this->x+a.x;
		 return d;
	 }
	 void prnt(){
		 //cout<<"result="<<x<<endl;
		 cout<<"base"<<endl;
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
	void prnt(){
		cout<<"derived"<<endl;
	}

};

int main (){
	derived  X(10),Y(20), Z;
	//base Z;
	//Z=(base)X+(base)Y;
	Z=X+Y;
	Z.prnt();
	((base) Z).prnt();
	char c; cin>>c;
	return 0;
}