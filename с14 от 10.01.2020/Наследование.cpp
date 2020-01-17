// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

class point{
	double x; // Эти поля будут недоступны в производном классе
	double y;
public:
	point(double x0, double y0) :x(x0), y(y0) {
		cout << "Point constructor" << endl;
	}
	~point(){
		cout << "Point destructor" << endl;
	}
	void move(double dx, double dy){ x += dx; y += dy; }
	void display() { cout << "x=" << x << " y=" << y << endl; }
};

class circle : public point{
	double radius;
public:
	circle(double x0, double y0, double r) :point(x0, y0), radius(r) {
		cout << "Circle constructor" << endl;
	}
	~circle(){
		cout << "Circle destructor" << endl;
	}
	void move(double dx, double dy, double dr){ 
		point::move(dx, dy);  
		radius += dr;
	}
	void display()
	{
		cout << "Center:\t"; point::display(); cout << " radius: " << radius << endl;
	}
	double square() { return 3.14159*radius*radius; }
};

class base{
private:
	int i;
protected:
	double d;
public:
	char c;
};

// Открытое наследование
//struct cl2 : public base
//class cl2 : public base{public:
struct cl2 : base{
	// доп поля и методы
	// d - protected
	void f(){
		d = 12.3;
		cout << "d = " << d << endl;
	}
};

// Закрытое наследование
//struct cl2 : private base
//class cl2 : private base
class cl3 : base{
	// доп поля и методы
	// d - private
public:
	void f(){
		d = 12.3;
		cout << "d = " << d << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	circle c1(10, 20, 5.0);
	c1.display(); //Переопределённый метод класса ellipse
	c1.point::move(-10.0, -5.0); //Метод класса point
	c1.move(-1.1, -2.2, 7);
	c1.display();
	cout << "square=" << c1.square() << endl;
	cl2 cl2Object;
	cl2Object.c = '1';
	cl2Object.f();
	cl3 cl3Object;
	//cl3Object.c = '1';
	cl3Object.f();
	getchar();
	return 0;
}
