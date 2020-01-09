// lab6_4.cpp: определ€ет точку входа дл€ консольного приложени€.
//

//  передача параметров по адресу

#include <iostream>
using namespace std;

void sumpr(float a,float b,float *s,float *pr);

int main()
{ float c,d,sum,pr;
setlocale (LC_ALL, "Rus");
  cout<<"¬ведите 2 числа: "<<endl;
 cin>>c;
 cout<<"\n";
 cin>>d;
  cout<<"\n";
  sumpr(c,d,&sum,&pr);//передача адресов переменных sum и pr, €вл€ющихс€ 
                      //результатами
 cout<<"sum= "<<sum<<"\t"<<"pr= "<<pr<<endl;
  system("pause");
  return 0;
}
void sumpr(float a,float b,float *s,float *pr)
{ *s=a+b;
  *pr=a*b;
}
