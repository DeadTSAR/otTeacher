#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
setlocale (LC_ALL, "RUS");
int i, n;
double a;
//��������� ����� ��� ������ ������ � ����
ofstream f;
//��������� ���� � ������ ������,
//����� ios::out ��������������� �� ���������
f.open("D:\\accounts.txt", ios::out);
//������ ���������� ������������ �����
cout<<"n="; cin>>n;
//���� ��� ����� ������������ �����
//� ������ �� � ����
for (i=0; i<n; i++)
{
cout<<"a=";
//���� �����
cin>>a;
f<<a<<"\t";
}
//�������� ������
f.close();
system("pause");
return 0;
}
