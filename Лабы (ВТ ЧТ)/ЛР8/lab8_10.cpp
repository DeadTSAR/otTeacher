
#include "conio.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale (0,"");
	int m,n,i,j;
	float **a, *p, **pp,*pt;
	cout<< "������� ���������� ����� � ��������: ";
	cin>>m>>n;
	a=new float*[m];
	for (i=0;i<m;i++)
		a[i]=new float[n];
	//���������� ��������� �������
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			a[i][j]=(i+1)*(j+1);
	//����� �������:
	cout<<"����� ������� 1:"<<endl;
	//c �������������� ��������
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	//� ������������� ������� �� ���������
	cout<<"����� ������� 2:"<<endl;
	for (i=0;i<m;i++)
	{  
		for (j=0;j<n;j++)
			cout<<*(*(a+i)+j)<<" ";
		printf("\n");
	}
	//� ������������� ��������� �� ������� ������
	cout<<"����� ������� 3:"<<endl;
	for (i=0;i<m;i++)
	{  
		p=*(a+i);//��� p=a[i]+j;
		for (j=0;j<n;j++)
			cout<<*(p+j)<<" ";
		printf("\n");
	}
//� �������������� ��������� �� ������� ������ � ��������� �� ������� �������
	cout<<"����� ������� 4:"<<endl;
	for (pp=a;pp<a+m;pp++)
	{  
		for (pt=*pp;pt<*pp+n;pt++)
			cout<<*pt<<" ";
		printf("\n");
	}
	for (i=0;i<m;i++)
		delete []a[i];
	delete []a;
	getch();

	return 0;
}

