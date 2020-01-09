//  работа с одномерным динамическим массивом

#include "stdio.h"
#include "conio.h"
#include <iostream>
using namespace std;

void output(float *a,int n);
void preob(float *a,int n);
int main()
{ 
	float *a;
  int n;
  cout<<"Vvedite n:"<<endl;
  cin>>n;
  a=new float[n];
   cout<<"Vvedite massiv:"<<endl;
    for(int i=0;i<n;i++)
	 cin>>a[i];
	cout<<endl;
  
  printf("\nisxodnij massiw\n");
  output(a,n);
  preob(a,n);
  printf("\npreobrasowannij massiw\n");
  output(a,n);
  getch();
  delete []a;
	return 0;
}

void output(float *a,int n)
{ for (int i=0;i<n;i++)
    printf("%5.1f  ",a[i]);
}
void preob(float *a,int n)
{float max,min;
 max=a[0]; min=a[0];
 for (int i=1;i<n;i++)
	 if (a[i]>max) max=a[i];
	 else if(a[i]<min) min=a[i];
 float y=max/min;
 for (int i=0;i<n;i++)
	 a[i]*=y;
}
