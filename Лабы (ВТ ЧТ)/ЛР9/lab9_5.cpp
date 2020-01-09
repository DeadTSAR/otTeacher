// lab7.cpp: определ€ет точку входа дл€ консольного приложени€.
//ѕараметры со значени€ми по умолчанию
//

#include <iostream>
using namespace std;

float siltjas(float a=4,float b=5,float c=6,
              float ro=7.8,float g=9.81);
int main()
{
	setlocale(LC_ALL, "Rus");
	float a,b,c,ro,g,p1,p2,p3,p4;
 cout<<"¬ведите габариты, плотность, ускорение свобоного падени€"<<endl;
  cin>>a>>b>>c>>ro>>g;
   p1=siltjas(a,b,c,ro,g);
   p2=siltjas(); //или p2:=st;
   p3=siltjas(a,b,c,ro);
   p4=siltjas(a,b,c);
   cout<<endl;
   cout<<"p1="<<p1<<" p2="<<p2<<" p3="<<p3<<" p4="<<p4<<endl;
  // system("pause");
	return 0;
}

float siltjas(float a,float b,float c,
              float ro,float g)
 { float st=a*b*c*ro*g;
   return st;
 }













