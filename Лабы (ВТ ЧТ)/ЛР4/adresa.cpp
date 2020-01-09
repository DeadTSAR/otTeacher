
#include "math.h"
#include "conio.h"
#include <iostream>
using namespace std;

int main()
{
	int x[10];
	for (int i=0;i<10;i++) {
		x[i]=i;
		cout<<&x[i]<<" "<<x[i]<<" "<<*(x+i)<<endl;
	}
	int *p;
		p=(int*)0x0012FF50;
		cout<<*p<<endl;
		*p=144;
		cout<<p<<" "<<*p<<endl;
_getch();
return 0;
}