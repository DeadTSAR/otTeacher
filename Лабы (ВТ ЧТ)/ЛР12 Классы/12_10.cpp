#include "stdafx.h"
#include<iostream>
using namespace std;
/* ������������� friend ��� 
���������� ����� �������� 
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

	// �������� �������� � ����� ����������� ��� ������������� �������
	friend point operator+(double x,point pnti);
	void prnt();
};

void point::prnt(){
	cout << " X: " << x << ", Y: " << y << "\n";
}

// ���������� ��������� + ��� �������� double + pnt
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
	/* ������������ ����� � ����� ������� � ��� ����� 
	��� �������� ������ ���� ����������� ����������� �������
	*/
	pnt1 = 7 + pnt1; 
	cout<<"friend\t7 + pnt1\n";
	pnt1.prnt();  // ����� + ������ (friend)

	char ch; cin>>ch;
}