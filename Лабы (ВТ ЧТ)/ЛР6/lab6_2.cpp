// lab6.cpp: ���������� ����� ����� ��� ����������� ����������.
//���� � ����� �������, ���������� ������������� � ������������ ��������� �������

#include "stdafx.h"
#include <iostream>
#define M 20
#define N 30
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	int m,n, a[M][N];
	cout<<"Enter m and n:"<<endl;
	cin>>m>>n;
cout<<"Enter the matrix:"<<endl;
for (int i=0;i<m;i++) //���� ����� ���� ����� �������
for (int j=0;j<n;j++) //���� ����� ��������� ������ �������
	cin>>a[i][j];  

cout<<"\nthe matrix:"<<endl;
for (int i=0;i<m;i++) //���� ������ ���� ����� �������
{
for (int j=0;j<n;j++) {//���� ������ ��������� ������ �������
cout<<a[i][j]<<"\t";
}
cout<<endl; //������� � ������ ����� ������ ����� ������
}

//���������� ������������� � ������������ ��������� �������

int amax=a[0][0], imax=0, jmax=0;
int amin=a[0][0], imin=0, jmin=0;
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
if (a[i][j]>amax)
{
amax=a[i][j];
imax=i;
jmax=j;
}
else if (a[i][j]<amin)
{
amin=a[i][j];
imin=i;
jmin=j;
}
cout<<"amax= "<<amax<<"\timax= "<<imax<<"\tjmax= "<<jmax<<endl;
cout<<"amin= "<<amin<<"\timin= "<<imin<<"\tjmin= "<<jmin<<endl;

system("pause");
	return 0;
}

