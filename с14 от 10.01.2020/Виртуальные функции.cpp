// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

class goods{
	double price;
	string name;
public:
	goods(double price, string name)
		:price(price), name(name){
	}
	virtual void print() const{
		cout << name << " : " << price << endl;
	}
	virtual string getName() const{
		return name;
	}
};

class milkGoods: public goods{
public:
	milkGoods(double price, string name)
		:goods(price, name){
	}
	/*virtual*/ void print() const override{
		cout << "Milk category : ";
		goods::print();
	}
	/*virtual*/ string getName() const override{
		return "Milk product " + goods::getName();
	}
};

class nechto : public goods{
public:
	nechto(double price, string name)
		:goods(price, name){
	}
	/*virtual*/ void print() const override{
		cout << "Strange category : ";
		goods::print();
	}
	/*virtual*/ string getName() const override{
		return string("No name");
	}
};

int _tmain(int argc, _TCHAR* argv[])
{

	goods * ptr1;
	ptr1 = new goods(50, "chokolate");
	ptr1->print();
	cout << "name: " << ptr1->getName() << endl;

	goods * ptr2;
	ptr2 = new milkGoods(100, "Kefir");
	ptr2->print();
	cout << "name: " << ptr2->getName() << endl;

	goods * ptr3;
	ptr3 = new nechto(200, "Babagaloush");
	ptr3->print();
	cout << "name: " << ptr3->getName() << endl;

	milkGoods milkObject(200, "Cake");

	goods * ptrArr[4] = { ptr1, ptr2, ptr3, &milkObject };
	cout << "\n\nPrinting information about all objects:\n";
	for (int i = 0; i < 4; i++){
		ptrArr[i]->print();
	}

	getchar();
	return 0;
}
