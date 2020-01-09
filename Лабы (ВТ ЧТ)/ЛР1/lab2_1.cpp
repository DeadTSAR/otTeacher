// lab2_1.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"");
	float x, y, y2;
	//metka1:
	while(1) {
	cout<<"¬ведите х:";
	cin>>x;
	if (x<-3) 
		y=-1/x;
	if (x>=-3 && x<0) {
		y=sqrt(-x);
	}
	if (x>=0 && x<1) 
		y=x*x;
	if (x>=1)
		y=sqrt(x);
	cout<<"y="<<y<<endl;
	if (x==0) break;
	
	//goto metka1;
	if (x<-3) 
		y2=-1/x;
	else if (x<0) {
		y2=sqrt(-x);
	}
		else if (x<1) {
			y2=x*x;
		}
		else y2=sqrt(x);
	cout<<"y2="<<y2<<endl;
	}

	system("pause");
	return 0;
}

