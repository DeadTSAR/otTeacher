#include "stdafx.h"
#include<iostream>
#include<string>
#include<time.h>
using namespace std;
/* Использование нескольких шаблонов при описании класса
*/
template <class T, class B>
class demo{
public:

	demo(T b,B c){
		a=b;
		id=c;
	}

	T geta(){
		return a;
	}

	B getb(){
		return id;
	}
private:
	T a;
	B id;
};

void main(){
	srand((int)time(0));

	demo<int,int>cls(10,rand());
	cout<<cls.getb()<<"\t"<<cls.geta()<<endl;

	demo<double,int>dbl(12.3,rand());
	cout<<dbl.getb()<<"\t"<<dbl.geta()<<endl;

	demo<string,int>str("Testing object",rand());
	cout<<str.getb()<<"\t"<<str.geta()<<endl;

	char ch; cin>>ch;
}