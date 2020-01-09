#include "stdafx.h"
#include <iostream>
using namespace std;

// h
struct rectangle{
	double width;
	double height;
	rectangle(double w, double h);
	~rectangle();
	double halfperim();
	double perimeter();
	void printData();
	//rectangle(double w, double h){
	//	width = w;
	//	height = h;
	//}
	//double halfperim() { return perimeter() / 2; }
	//double perimeter() { return width * 2 + height * 2; }
	//void printData(){
	//	cout << "width = " << width << endl;
	//	cout << "height = " << height << endl;
	//}
};

// cpp
rectangle::rectangle(double w, double h){
	width = w;
	height = h;
}
rectangle::~rectangle(){}
double rectangle::halfperim() { return perimeter() / 2; }
double rectangle::perimeter() { return width * 2 + height * 2; }
void rectangle::printData(){
	cout << "width = " << width << endl;
	cout << "height = " << height << endl;
}

// ODL

int main()
{       // Определение объекта класса:
	rectangle R1(9, 8); // Можно инициализировать: rectangle R1 = {5, 3.5};
	//R1.rectangle::width = 5; R1.rectangle::height = 3.5; // Присваивание значений в поля данных
	R1.printData(); // Вызов метода
	cout << "\nPerimeter/2 = " << R1.halfperim() << endl;
	cout << "\nPerimeter = " << R1.perimeter();
	return 0;
}