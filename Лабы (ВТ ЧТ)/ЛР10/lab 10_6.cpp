
#include "conio.h"
#include <iostream>
using namespace std;

typedef union{
char sach;
int ekz;} prow;

typedef  struct 
{ char f[30];
  int tip;
  prow oc;
}sap;

int main()
{
	 setlocale(LC_ALL,"Rus");
	sap a[10],b;
	int n,k,kol,i,flag;
	cout<<"������� ���������� ��������� �������: "<<endl;	
	cin>>n;
	cout<<endl;
	cout<<"������� �������� �������"<<endl;	
	for(i=0;i<n;i++)
	{
		cout<<"\n������� �������: ";
		cin>>a[i].f;
		cout<<"������� ��� 0 - �����, 1 - �������: "<<endl;	
		cin>>a[i].tip;
		//cout<<"������� ������: ";	
		switch (a[i].tip) {
			case 0: {a[i].oc.sach=getch(); break;}
			case 1: {cin>>a[i].oc.ekz; break;};
		}
	}
	cout<<"\n����������� ����� �������";	
	for(i=0;i<n;i++)
	{
		cout<<a[i].f<<endl;
		cout<<a[i].tip<<endl;
		switch (a[i].tip) {
			case 0: {cout<<a[i].oc.sach<<endl; break;}
			case 1: {cout<<a[i].oc.ekz<<endl; break;};
		}
	}
	k=0;
	do
	{
		flag=0;
		k++;
		for (i=0;i<n-k;i++)
		if (strcmp(a[i].f,a[i+1].f)>0)
		{
			b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
			flag=1;
		}
}while (flag);  
	cout<<"\n����� ������������� �������";	
	for(i=0;i<n;i++)
	{
		cout<<a[i].f<<endl;
		cout<<a[i].tip<<endl;
		switch (a[i].tip) {
			case 0: {cout<<a[i].oc.sach<<endl; break;}
			case 1: {cout<<a[i].oc.ekz<<endl;  break;};
		}
	}
system("pause");
 return 0;
}
