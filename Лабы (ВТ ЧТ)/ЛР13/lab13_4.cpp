#include "stdafx.h"
#include <iostream>
using namespace std;
/* ��������� ���������� ����������
*/
class base {
	// ������� �����
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
	// ����������� �����
	public:
	derived(){}
	derived(double a):base(a){}
	// ���������� ���������
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