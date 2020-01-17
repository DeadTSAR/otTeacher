#include "stdafx.h"
#include <iostream>
using namespace std;

struct goods0{
	char name[40];
	double price = 0;
	goods0(char * n, double p){
		strcpy_s(name, n);
		price = p;
	}
};

struct goods{
	char name[40];
	double price = 0;
	int type = 0;
	static double percent[3]; // Статическое поле данных – одно на все объекты
	
	//Конструктор общего вида
	goods(char * n = "No name", double p = 0, int t = 0){
		cout << "Common constructor!" << endl;
		strcpy_s(name, n);
		price = p;
		type = t;
	}

	goods(const goods & g){
		cout << "Copy constructor!" << endl;
		strcpy_s(name, g.name);
		price = g.price;
		type = g.type;
	}

	goods(const goods0 & g){
		cout << "Type conversion constructor!" << endl;
		strcpy_s(name, g.name);
		price = g.price;
		type = 0;
	}

	// Конструктор без параметров
	//goods(){
	//	strcpy_s(name, "No name");
	//	price = 0;
	//	type = 0;
	//}

	void display() const{
		cout << name << " price = " << \
			price * (1.0 + goods::percent[type] / 100.0) << endl;
	}

	static void PrintClassInfo(){
		cout << "Class goods" << endl;
	}
};

double goods::percent[3] = {10, 20, 30}; // Инициализация статического поля данных

class math{
public:
	static double pow2(double x){
		return x*x;
	}
	static double pow3(double x){
		return x*x*x;
	}
	static double absval(double x){
		return (x < 0) ? (-x) : (x);
	}
};

int main()
{
	cout << "9^2 = " << math::pow2(9) << endl;
	cout << "9^2 = " << math::pow3(9) << endl;
	cout << "|-15| = " << math::pow2(-15) << endl;

	goods::PrintClassInfo();
	goods G3("Chocolate", 100, 1);
	G3.display();
	goods G1 = { "Milk", 50, 0 }, G2 = { "Honey", 800, 2 };
	G1.display(); G2.display();
	goods::percent[0] = 15;
	goods::percent[2] = 25;
	G1.display(); G2.display();

	//Copy constructor
	goods G4(G3);
	G4.display();

	goods0 Bread = { "Bread", 40 };
	goods G5(Bread);
	G5.display();

	goods G6;
	G6.display();

	goods gArr[8];
	for (const goods & item : gArr){
		item.display();
	}

	getchar();
	return 0;
}
