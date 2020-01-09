#include "stdafx.h"
#include <iostream>
using namespace std;

struct rectangle{
	int width;
	int height;
	explicit rectangle(int w = 0, int h = 0){
		width = w;
		height = h;
	}
	void print() const{
		cout << "Rectangle " << width << "x" << height << endl;
	}
};

int main()
{
	rectangle R1(3, 6);
	R1.print();

	// Получалось без explicit
	// rectangle R2 = { 4, 7 };
	rectangle R2 = rectangle{ 4, 7 };
	R2.print();

	// Получалось без explicit
	//rectangle R3 = 5; // -> rectangle R3 = rectangle(5);
	rectangle R3 = rectangle(5);
	R3.print();

	getchar();
	return 0;
}
