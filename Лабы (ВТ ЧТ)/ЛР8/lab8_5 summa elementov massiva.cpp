// lab6_5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;
const int nn=25;

void soxran(float a, int *k);
int main()
{ 
  float a[nn],b[nn];
  int m,l=0;
  setlocale (LC_ALL, "Rus");
   cout<<"������� ���������� ���������= ";
   cin>>m;
   cout<<endl;
   cout<<"������� �������� �������:  ";
  for (int i=0;i<m;i++) {
	 cin>>a[i];
  soxran(a[i], &l);
  }
  cout<<l;
  /*if (l==0) cout<<"������������� ��������� ���"<<endl;
  else
  {
	  cout<<"������ �������������:"<<endl;
    for (int i=0;i<l;i++)
      cout<<b[i]<<endl;
  }*/
  system("pause");
  return 0;
}
void soxran(float a,int *k)
{*k+=a;
}

