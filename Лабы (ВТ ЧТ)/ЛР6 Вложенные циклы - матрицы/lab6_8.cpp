// lab 9.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
#include<time.h>
using namespace std;
/* �������� ���������� � ������������ ������
*/
void main(){
	srand((int)time(0));
	// ������ ���������
	int *a,*b,*c;
	// �������� �������� ��������� � ������������ ������ � 
	a=new int; *a=rand()%1000; // ����������� �������� ���������
	b=new int; *b=rand()%1000; // �� ������� ��������� ���������
	c=new int; *c=rand()%1000;
	cout<<*a<<"\t"<<*b<<"\t"<<*c<<endl;
	int d=*a + *b - *c;
	cout<<d<<endl;
	char ch; cin>>ch;
	delete a;
	delete b;
	delete c; 
}