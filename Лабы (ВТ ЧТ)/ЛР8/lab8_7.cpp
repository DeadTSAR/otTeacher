
//
//  одномерный динамический массив – выделение памяти с помощью функции 
//  malloc


#include "stdlib.h"
#include <iostream>
using namespace std;

int main()
{ setlocale(LC_ALL, "Rus");
	float *a;
  int n;
  cout<<"Введите количество элементов массива"<<endl;
  cin>>n; 
  a=(float *)malloc(n*sizeof (float));
  if (!a) cout<<"Ошибка"<<endl; 
  else {
	  cout<<"Введите элементы"<<endl; 
	    for(int i=0;i<n;i++)
	        cin>>a[i];
		cout<<"Массив"<<endl;
        for(int i=0;i<n;i++)
	        cout<<a[i]<<"\t";
  }
  free(a);
  system("pause");
 return 0;
 }
