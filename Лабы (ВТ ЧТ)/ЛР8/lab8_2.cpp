// lab 6_2.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include <iostream>
using namespace std;
float a, b, sum, pr;//���������� ����������
void fun();//���������� �������
int main()
{
  setlocale (LC_ALL, "Rus");
  cout<<"������� ������ ����� ";
  cin>>a;
  cout<<"������� ������ ����� ";
  cin>>b;
  fun();
  cout<<"sum= "<<sum<<endl;
  cout<<"proizvedenie= "<<pr<<endl;
 system("pause");
}

void fun()//����������� �������
{
sum=a+b;
pr=a*b;
 }
