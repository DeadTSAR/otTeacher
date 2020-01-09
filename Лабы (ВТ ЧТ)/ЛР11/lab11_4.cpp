

#include "stdio.h"
#include "conio.h"
//#include "math.h"
#include <iostream>
using namespace std;

template <class D>
int count0 (int, D*); //прототип шаблона


int main()
{ 
	int A[]={1,0,6,0,4,10};
	int n=sizeof(A)/sizeof A[0];
	cout<<"\ncount0(n,A)="<<count0(n,A);
	float X[]={10.0, 0.0, 3.3, 0.0, 2.1};
	 n=sizeof(X)/sizeof X[0];
	cout<<"\ncount0(n,X)="<<count0(n,X);
  _getch();
  return 0;
}

template <class T>
int count0 (int size, T* array)
{
	int k=0;
	for (int i=0; i<size; i++)
		if (int (array[i])==0) k++;
	return k;
}