#include "stdafx.h"
#include<iostream>
#include<time.h>
using namespace std;
/* ������������ ����������� �������
� ������ ������� ������� print �������� ���� ���
��� ����� ������. 
������ �������� ����� ������� ���������.
*/
class point{
	double x,y;
	public: 
	point(){
		x=y=0;
	}
	point(int a,int b){
		x=a; y=b;
	}
	// ����������� �������
	void static print(point a){
		cout<<"Point="<<a.x<<"\t"<<a.y<<endl;
	}	
};

int gn(){
	return (double)rand()%100;
}

void main(){	
	// ��������� � ����������� �������
	point a(7,11); 
	point::print(a); 
	point b(8,12); 
	point::print(b); 
	point c(5,3); 
	point::print(c);
	char ch; cin>>ch;
}