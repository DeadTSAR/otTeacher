// 1.cpp: ���������� ����� ����� ��� ����������� ����������.
//
//  ���������� ������������ ������ � ��������� ������ � ������� ������� 
//  realloc

#include "stdlib.h"
#include <iostream>
using namespace std;

int main()
{ setlocale(LC_ALL, "Rus");
	float *a;
  int m,n;
  a=NULL;
  cout<<"������� ���������� ��������� �������"<<endl;
  cin>>n; 
  a=(float *)realloc(a,n*sizeof (float));
  if (!a) cout<<"������"<<endl; 
  else {
	  cout<<"������� ��������"<<endl; 
	    for(int i=0;i<n;i++)
	        cin>>a[i];
		cout<<"������"<<endl;
        for(int i=0;i<n;i++)
	        cout<<a[i]<<"\t";
		cout<<"������� ����� ���������� ��������� �������"<<endl;
		m=n;
		cin>>n;
		a=(float *)realloc(a,n*sizeof (float));
		cout<<"������� ����� ��������"<<endl;
		for (int i=m;i<n;i++)
         cin>>a[i]; 
        cout<<"������"<<endl; 
          for(int i=0;i<n;i++)
	       cout<<a[i]<<"\t";
  }      
  a=(float *)realloc(a,0);
 // free(a);
  system("pause");
 return 0;
 }
