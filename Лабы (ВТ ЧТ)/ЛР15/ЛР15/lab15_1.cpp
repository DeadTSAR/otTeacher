
#include<iostream>
#include <time.h>
using namespace std;

void main(){

char s1[101], s2[101];
 printf("wwedite stroku\n");
 //cin>>s1;  
 gets(s1);
 //s2=s1;
 int i=-1;
	do{  i++;
  s2[i]=s1[i];}
  while (s1[i]!='\0');
	 printf("\n stroka s2=  ");
	 cout<<s2; 
	 //puts(s2);

	system("pause");
}
