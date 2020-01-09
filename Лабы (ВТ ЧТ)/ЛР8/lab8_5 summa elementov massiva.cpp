// lab6_5.cpp: определяет точку входа для консольного приложения.
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
   cout<<"Введите количество элементов= ";
   cin>>m;
   cout<<endl;
   cout<<"Введите элементы массива:  ";
  for (int i=0;i<m;i++) {
	 cin>>a[i];
  soxran(a[i], &l);
  }
  cout<<l;
  /*if (l==0) cout<<"Отрицательных элементов нет"<<endl;
  else
  {
	  cout<<"Массив отрицательных:"<<endl;
    for (int i=0;i<l;i++)
      cout<<b[i]<<endl;
  }*/
  system("pause");
  return 0;
}
void soxran(float a,int *k)
{*k+=a;
}

