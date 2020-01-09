// lab6_3.cpp: определяет точку входа для консольного приложения.
//

// побочные эффекты

#include <iostream>
using namespace std;

float x=5;
float sum(float a,float b);
int main()
{  setlocale (LC_ALL, "Rus");
	float a=8,b=2,y=0;
   cout<<"x= "<<x<<endl;
    y=x; // 1-ый вариант
    y+=sum(a,b)+sum(3,4);  
	//2-ой вариант 
	//y+=x;
     cout<<"y= "<<y<<endl;
   system("pause");
	return 0;
}
float sum( float a,float b)
{ x=x+2;
 cout<<"x= "<<x<<"\t"<<"a= "<<a<<"\t"<<"b= "<<b<<endl;
return a+b;
}
