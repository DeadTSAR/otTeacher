#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
/* Использование шаблона при описании класса
*/
template <class T>
class demo
{
public:
	demo(T b){a=b;}
	T prnt(){return a * 10;}
private:
	T a;
};

template <>
class demo<string> 
{
public:
	demo(string b){a=b;}
	string prnt(){return a + a;}
private:
	string a;
};

void main(){
	demo<int> cls(10);
	cout<<cls.prnt()<<endl;

	demo<double> dbl(12.3);
	cout<<dbl.prnt()<<endl;

	demo<string> str("Testing object");
	cout<<str.prnt()<<endl;

	char ch; cin>>ch;
}