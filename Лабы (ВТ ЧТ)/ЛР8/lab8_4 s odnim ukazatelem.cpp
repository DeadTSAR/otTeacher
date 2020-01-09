// lab6_4.cpp: определ€ет точку входа дл€ консольного приложени€.
//

//  передача параметров по адресу

#include <iostream>
using namespace std;

float sumpr(float a,float b,float *pr);

int main()
{ float c,d,pr=0;
setlocale (LC_ALL, "Rus");
  cout<<"¬ведите 2 числа: "<<endl;
 cin>>c;
 cout<<"\n";
 cin>>d;
  cout<<"\n";
  //sumpr(c,d,sum,&pr);//передача адресов переменных sum и pr, €вл€ющихс€ 
                      //результатами
  // cout<<"sum= "<<sumpr(c,d,&pr)<<"\t"<<"pr= "<<pr<<endl;
  // cout<<pr;
 cout<<"pr= "<<pr<<"\t"<<"sum= "<<sumpr(c,d,&pr)<<endl;
  system("pause");
  return 0;
}
float sumpr(float a,float b,float *pr)
{ float s=a+b;
  *pr=a*b;
  return s;
}
