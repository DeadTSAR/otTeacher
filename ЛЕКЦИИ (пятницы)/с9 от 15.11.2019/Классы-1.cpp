#include "stdafx.h"
#include <iostream>
using namespace std;

struct rectangle{
	double width = 10;
	double height = 5;
	double halfperim() { return perimeter() / 2; }
	double perimeter() { return width * 2 + height * 2; }
	void printData(){
		cout << "width = " << width << endl;
		cout << "height = " << height << endl;
	}
};

//void f();
//void g(){
//	f();
//}
//
//void f(){
//
//}

int main()
{       // ����������� ������� ������:
	rectangle R1; // ����� ����������������: rectangle R1 = {5, 3.5};
	//R1.rectangle::width = 5; R1.rectangle::height = 3.5; // ������������ �������� � ���� ������
	R1.rectangle::printData(); // ����� ������
	cout << "\nPerimeter/2 = " << R1.rectangle::halfperim() << endl;
	cout << "\nPerimeter = " << R1.rectangle::perimeter();
	return 0;
}