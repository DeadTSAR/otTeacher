// lab6_1.cpp: ���������� ����� ����� ��� ����������� ����������.
//


#include <iostream>
using namespace std;


int mod5(int k, int m);//���������� �������
int main()
{ int a,b;
  setlocale (LC_ALL, "Rus");
  cout<<"������� ������ ����� ";
  cin>>a;
  cout<<"������� ������ ����� ";
  cin>>b;
  cout<<"���������� �� �����, ������� 5 = "<<mod5(a,b)<<endl;
  system("pause");
  return 0;
}

int mod5(int k, int m)//����������� �������
// k,m - ���������� ���������
{
if (k%5==0) 
return k;
 	else 
if(m%5==0) 
return m; 
else 
return -1;
 }
