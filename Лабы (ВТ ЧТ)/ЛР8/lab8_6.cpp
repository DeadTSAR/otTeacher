// 1.cpp: ���������� ����� ����� ��� ����������� ����������.
//
//  ���������� ������������ ������ � ��������� ������ � ������� ������� 
//  calloc


#include "stdlib.h"
#include <iostream>
using namespace std;

int main()
{ setlocale(LC_ALL, "Rus");
	float *a;
  int n;
  cout<<"������� ���������� ��������� �������"<<endl;
  cin>>n; 
  a=(float *)calloc(n,sizeof (float));
  if (!a) cout<<"������"<<endl; 
  else {
	  cout<<"������� ��������"<<endl; 
	    for(int i=0;i<n;i++)
	        cin>>a[i];
		cout<<"������"<<endl;
        for(int i=0;i<n;i++)
	        cout<<a[i]<<"\t";
  }
  free(a);
  system("pause");
 return 0;
 }
