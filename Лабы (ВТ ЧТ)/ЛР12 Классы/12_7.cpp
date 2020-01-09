#include "stdafx.h"
#include<iostream>
#include<time.h>
using namespace std;
/* ������������ ������������ ��������
� ������ ������� �������������� ����� �����
��������� �������� ����� ������
*/
class point{
	double x,y;
	public:
	static int number; // �������� ����������� �������
	point(){
		number++;
		x=y=0;
	}
	point(int a,int b){
		number++;
		x=a; y=b;
	}
	~point(){
		number--;
	}
	void print(){
		cout<<"Point="<<x<<"\t"<<y<<endl;
	}	
};
int point::number=0; // �������������� ����������� �������
int gn(){
	return (double)rand()/(double)RAND_MAX*100;
}

void main(){
	// ������ ��� �������
	point a(7,11);
	point b(8,12);
	point c(5,3);	
	a.print(); b.print(); c.print();
	// ���������� ����������� �������
	cout<<"all elements="<<point::number<<endl;
	{
		// ��������� ������ ����� ���������
		point mas[10];
		for(int i=0; i<10; i++){
			point p(gn(),gn());
			mas[i]=p;
			mas[i].print();
		}
		cout<<"all elements="<<point::number<<endl;
	}
	// ����� ������ �� ����� ������ ������������
	cout<<"all elements="<<point::number<<endl;
	char ch; cin>>ch;
}