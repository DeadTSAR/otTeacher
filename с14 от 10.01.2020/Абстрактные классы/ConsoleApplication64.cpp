// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include "goods.h"
#include "milkGoods.h"
#include "nechto.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	goods * ptr1;
	ptr1 = new nechto(50, "chokolate");
	ptr1->goods::print();
	cout << "name: " << ptr1->goods::getName() << endl;

	goods * ptr2;
	ptr2 = new milkGoods(100, "Kefir");
	ptr2->goods::print();
	cout << "name: " << ptr2->goods::getName() << endl;

	goods * ptr3;
	ptr3 = new nechto(200, "Babagaloush");
	ptr3->goods::print();
	cout << "name: " << ptr3->goods::getName() << endl;

	milkGoods milkObject(200, "Cake");

	goods * ptrArr[4] = { ptr1, ptr2, ptr3, &milkObject };
	cout << "\n\nPrinting information about all objects:\n";
	for (int i = 0; i < 4; i++){
		ptrArr[i]->goods::print();
	}

	getchar();
	return 0;
}
