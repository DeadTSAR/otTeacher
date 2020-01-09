// lab 9.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "math.h"
#include <iostream>
using namespace std;
struct point 
	{
		int x; 
		int y;
	};


int main()
{ 
	setlocale(LC_ALL,"Rus");
	float r;
	point a,b; 
	
	cout<<"¬ведите первую точку"<<endl;
	cin>>a.x>>a.y;
	cout<<endl;
	cout<<"¬ведите вторую точку"<<endl;
	cin>>b.x>>b.y;
	cout<<endl;
	
	cout<<"¬ывод координат двух точек"<<endl;
	cout<<a.x<<"\t"<<a.y<<endl;
	cout<<b.x<<"\t"<<b.y<<endl;
	
	//определение рассто€ни€ между двум€ точками
	r=sqrt((float)(b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
	cout<<"r= "<<r<<endl;
	system("pause");
	return 0;
}
