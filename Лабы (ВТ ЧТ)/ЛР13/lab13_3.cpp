#include "stdafx.h"
#include <iostream>
using namespace std;
/* ������ ������������
*/
class A {
	// ������� �����
	protected:
	int a;	
	A() { 
		cout<<"�������� ������ ����������� ������ A\n";
		a = 0; 
	}
	A(int a0){
		cout<<"�������� ����������� ����������� ������ A\n";
		a=a0;
	}
};

class B: public A {
	// ����������� �����
	private:
	int b;
	public:
	// ����� ����� ������������ ������ A
	B(int a0, int b0):A(a0){ 
		cout<<"�������� ����������� ������ B\n";
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