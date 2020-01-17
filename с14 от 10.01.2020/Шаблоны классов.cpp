// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
#include <tuple>
using namespace std;

template<typename A, typename B>
class myPair{ //myPair – имя семейства классов
	A x;
	B y;
public:
	//Конструктор:
	myPair(A xx = A(0), B yy = B(0)) :x(xx), y(yy) {}
	//Метод, возвращающий частное:
	A getDiv(void) { return x / y; }
	//Перегрузка оператора сложения:
	myPair <A, B> operator+ (myPair <A, B> &p)
	{
		return myPair<A, B>(x + p.x, y + p.y);
	}
	//Метод для вывода полей класса:
	void display()
	{
		cout << "x=" << x << ", y=" << y << endl;
	}
	A& first(){
		return x;
	}
	B& second(){
		return y;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	myPair<int, double> pair1(5, 10.5);
	myPair<int, double> pair2(133, 13.5);
	myPair<int, double> pair3;
	pair3 = pair1 + pair2;
	pair3.display();
	cout << "Div = " << pair3.getDiv() << endl;

	cout << "pair3.first() = " << pair3.first()
		<< "; pair3.second() = " << pair3.second() << endl;

	pair3.second() = 55;

	cout << "pair3.first() = " << pair3.first()
		<< "; pair3.second() = " << pair3.second() << endl;

	getchar();
	return 0;
}
