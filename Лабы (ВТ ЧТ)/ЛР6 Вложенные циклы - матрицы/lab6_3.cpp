// lab6.cpp: ���������� ����� ����� ��� ����������� ����������.
//�������� ������� ������ � ���������� � ���������� ������� ���������

#include "stdafx.h"
#include <iostream>
#include "time.h"
#define mm 12//������� ������������� ���������� ����� �
#define nn 10//�������� �������
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
float a[mm][nn] //�������
,s // ����� ��������� ������� ������
,smax // ������������ �����
,smin // ����������� �����
,b; // ��������������� ���������� ��� ������

int imax //������ ������ � ������������ ������ ���������
,imin //������ ������ � ����������� ������ ���������
,i,j //��������� ������
,m,n; //����������� ���������� ����� � �������� �������
cout<<"������� ���������� ����� � ��������:"<<endl;
cin>>m>>n;
cout<<endl;
cout<<"\n�������� �������\n";
srand(time(NULL));
for (i=0;i<m;i++) {
for (j=0; j<n;j++) {
a[i][j]=rand()%1000;
cout<<a[i][j]<<"\t";}
cout<<endl;
}

//������� ��������� ��������
smax=-1e30; //����� ��������� �����
smin=1e30; //����� ������� �����
//������ ������, ����� ��������� � ����� �������
//�������� ��� ������������� ���� ������
/*
//������ ������� � ���������� ����� ��������� ������ ������ �
//������� ����� �������� ��� ��������� � ��������:
s=0;
for (J=0; j<n;j++)
s+=a[0][j];
smax=s; imax=0;
smin=s; imin=0;
//����� ������ ����� �������������, ������� �� ������
*/
//���� ������ ����� � ������������ � �����������
//������� ���������
for (i=0;i<m;i++)
{
s=0; //������� ���������� �������� �����
//���� ���������� ����� ��������� ��������� ������
for (j=0;j<n;j++)
s+=a[i][j];
if (s>smax) //���������� ������ � ������������ ������
{
smax=s;

imax=i;
}
if (s<smin) //���������� ������ � ����������� ������
{
smin=s;
imin=i;
}
}
for (j=0;j<n;j++) //���� ������ ������� ��������� �����
{
b=a[imin][j];
a[imin][j]=a[imax][j];
a[imax][j]=b;
}
cout<<"\n���������� �������\n";
for (i=0; i<m;i++)
{
for (j=0; j<n;j++)
cout<<a[i][j]<<"\t";
cout<<endl;
}

system("pause");
	return 0;
}

