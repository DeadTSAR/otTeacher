#include "stdafx.h"
#include <iostream>
using namespace std;

struct rectangle{
	int width;
	int height;
	static int counter;
	static int getCounter(){
		return counter;
	}

	explicit rectangle(int w = 0, int h = 0)
		:width(w), height(h)
	{
		//width = w;
		//height = h;
		counter++;
	}

	rectangle(const rectangle & r){
		width = r.width;
		height = r.height;
		counter++;
	}

	void print() const{
		cout << "Rectangle " << width << "x" << height << endl;
	}
};

int rectangle::counter = 0;

int main()
{
	rectangle R1(3, 6);
	R1.print();
	cout << "Counter = " << rectangle::getCounter() << endl;

	// Получалось без explicit
	// rectangle R2 = { 4, 7 };
	rectangle R2 = rectangle{ 4, 7 };
	R2.print();
	cout << "Counter = " << rectangle::getCounter() << endl;

	// Получалось без explicit
	//rectangle R3 = 5; // -> rectangle R3 = rectangle(5);
	rectangle R3 = rectangle(5);
	R3.print();
	cout << "Counter = " << rectangle::getCounter() << endl;

	rectangle R4(R3);
	cout << "Counter = " << rectangle::getCounter() << endl;

	getchar();
	return 0;
}
