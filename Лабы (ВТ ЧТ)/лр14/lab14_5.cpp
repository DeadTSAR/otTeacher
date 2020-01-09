
#include<iostream>
using namespace std;

struct base {
	virtual void f1 (void) 
	{ 
		cout<<"base::f1 "<<endl;
	}

	virtual void f2 (void) 
	{ 
		cout<<"base::f2 "<<endl;
	}

	virtual void f3 (void) 
	{ 
		cout<<"base::f3 "<<endl;
	}
};

struct dir: public base {
	void f1(void) {
		cout<<"dir::f1"<<endl;
	}
	//ошибка в типе функции
	//int f2(void) {cout<<"dir::f2"<<endl;}
	void f3 (int i) {
	cout<<"dir::f3::i="<<i<<endl;
	}
};


void main() {
	base B, *pb=&B;
	dir D, *pd=&D;
	pb->f1(); 
	pb->f2();
	pb->f3(); 
	pd->f1(); 
	pd->f2(); 
	//ошибка при попытке без параметра вызвать dir::f3(int);
	//pd->f3();
	pd->f3(0);
	pb=&D;
	pb->f1();
	pb->f2();
	pb->f3();
	//ошибочное употребление или параметра, или указателя:
	//pb->f3(3);

	system("pause");
}