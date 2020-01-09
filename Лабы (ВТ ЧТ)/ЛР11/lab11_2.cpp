// пример использование шаблона функции

#include "stdio.h"
#include "conio.h"
//#include "math.h"
#include <iostream>
using namespace std;

template <class T>
void swap(T* x, T* y) { 
T z=*x;
*x=*y; *y=z;
}

int main()
{ int k=4, d=8;
cout<<k<<" "<<d<<endl;
swap(&k, &d);
cout<<k<<" "<<d<<endl;

double a=2.44, b=6.3;
cout<<a<<" "<<b<<endl;
swap (&a, &b);
cout<<a<<" "<<b<<endl;

  _getch();
  return 0;
}
