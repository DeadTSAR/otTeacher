#include "stdafx.h"
#include<iostream>
using namespace std;
/* Использование friend для 
перегрузки левой операции 
*/
class point{
	double x, y;

public:
	point(){
		x=0; y=0;
	}
	point(double ax, double ay){
		x=ax; y=ay;
	}

	// Оператор сложения с целым описывается как дружественная функция
	friend point operator+(double x,point pnti);
	void prnt();
};

void point::prnt(){
	cout << " X: " << x << ", Y: " << y << "\n";
}

// Перегрузка оператора + для операции double + pnt
point operator+(double x, point pnti)
{
	point temp;
	temp.x = pnti.x + x ; temp.y = pnti.y + x;
	return temp;
}

int main (){
	setlocale(LC_ALL,"Russian"); 

	point pnt1(10, 10);
	pnt1.prnt(); 
	/* Складывается цифра с нашим классом и для этого 
	эта операция должна быть перегружена специальным образом
	*/
	pnt1 = 7 + pnt1; 
	cout<<"friend\t7 + pnt1\n";
	pnt1.prnt();  // целое + объект (friend)

	char ch; cin>>ch;
}