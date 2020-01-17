// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <algorithm> // подключаем STL для shuffle
using namespace std;

class myComplex{
	double re, im;
public: myComplex(double r = 0.0, double i = 0.0) :re(r), im(i) {}
		double real() const{ return re; }
		double imag() const{ return im; }
		myComplex operator - (){ return myComplex(-re, -im); }
		//friend istream & operator >> (istream &, myComplex &);
		void operator >> (istream & is){
			cout << "real = "; is >> re; cout << "image = "; is >> im;
		}
};

ostream & operator << (ostream & output, const myComplex & c){
	output << "real = " << c.real() << ",\t image = " << c.imag() << endl;
	return output;
}

//istream & operator >> (istream & in, myComplex & c){
//	cout << "real = "; in >> c.re; cout << "image = "; in >> c.im;
//	return in;
//}
myComplex operator + (myComplex A, myComplex B){
	return myComplex(A.real() + B.real(), A.imag() + B.imag());
}

string operator-(const string & str){
	return string("---") + str;
}

int _tmain(int argc, _TCHAR* argv[])
{
	string s("Hello");
	string s2;
	s2 = -s;
	cout << s2 << endl;

	myComplex V(4.3, -6.1);
	myComplex W;
	//cin >> W; // operator>>(cin, W);

	W >> cin;

	V = V + W; // operator+(V, W)
	cout << "V =\t" << V; // operator<<(cout, V)
	V = -V; // V.operator-();
	cout << V << W << V << W; // Так как оператор-функция operator<< возвращает ссылку на
	// объект класса ostream, допустимо использование «цепочек» при выводе
	return 0;
}
