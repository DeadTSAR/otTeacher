// lab2.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "math.h"
#include <iostream>
using namespace std;

int _tmain0(int argc, _TCHAR* argv[])
{
	
	setlocale (0,"");
	float x, y1, y2;

	while(1) {
	cout<<"¬ведите х:";
	cin>>x;
	if (x<=-2) y1=x+3;
	else if (x<=-1) y1=-x-1;
		 else if (x<=1) y1=sqrt(1-x*x); 
		      else if (x<=2) y1=x-1;
			       else y1=-x+3;
	cout<<"y1="<<y1<<endl;

	if (x<=-2) y2=x+3;
	if (x>-2&&x<=-1) y2=-x-1;
	if (x>-1&&x<=1) y2=sqrt(1-x*x);
	if (x>1&&x<=2) y2=x-1;
	if (x>2) y2=-x+3;

	cout<<"y2="<<y2<<endl;

	char ch;
	cout<<"¬ведите q дл€ выхода";
	cin>>ch;
	if (ch=='q') break;
	}

	//system("pause");
	return 0;
}

