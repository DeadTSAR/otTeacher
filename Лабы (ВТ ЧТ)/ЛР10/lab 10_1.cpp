// lab 9.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "math.h"
#include <iostream>
using namespace std;
struct point 
	{
		int x; 
		int y;
	};


int main()
{ 
	setlocale(LC_ALL,"Rus");
	float r;
	point a,b; 
	
	cout<<"������� ������ �����"<<endl;
	cin>>a.x>>a.y;
	cout<<endl;
	cout<<"������� ������ �����"<<endl;
	cin>>b.x>>b.y;
	cout<<endl;
	
	cout<<"����� ��������� ���� �����"<<endl;
	cout<<a.x<<"\t"<<a.y<<endl;
	cout<<b.x<<"\t"<<b.y<<endl;
	
	//����������� ���������� ����� ����� �������
	r=sqrt((float)(b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
	cout<<"r= "<<r<<endl;
	system("pause");
	return 0;
}
