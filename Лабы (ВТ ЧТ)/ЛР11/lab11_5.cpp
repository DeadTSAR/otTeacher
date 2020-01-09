// пример использование шаблона функции

#include "stdio.h"
#include "conio.h"
#include <math.h>
template <class TD>
void sortmin( int n,TD *a)
{int i,j,k;
 bool flag;
 TD b; //переменная  b  будет иметь тот же тип, что и  второй фактичкский 
       // параметр, передаваемый в функцию   
 k=0;
  do
  {k++;
   flag=false;
   for (i=0;i<n-k;i++)
     if (a[i]>a[i+1]) 
	 { b=a[i];
       a[i]=a[i+1];
	   a[i+1]=b;
	   flag=true;
	 }
  }while (flag);
}
int main()
{ const int nn=20;
  int n,i;
  float a[nn];
  char ch[nn];
  printf("Wwedite kol-wo elementow\n");
  scanf("%d",&n);
  printf("\nWwedite  elementi\n");
  for (i=0;i<n;i++)
    scanf("%f",&a[i]);
  printf("\n massiw elementow\n");
  for (i=0;i<n;i++)
    printf("%5.2f ",a[i]);
  sortmin(n,a);
  printf("\n otsortirowannij massiw elementow\n");
  for (i=0;i<n;i++)
    printf("%5.2f ",a[i]);
  getch();

  printf("\n Simwoli Wwedite kol-wo elementow\n");
  scanf("%d",&n);
  printf("\n Wwedite  elementi\n");
  //считывает символ 10 перевод влево курсора
  i=0;
  do
  {scanf("%c",&ch[i]);
   if (ch[i]!=10) i+=1;
  }while(i<n);
  printf("\nmassiw elementow\n");
  for (i=0;i<n;i++)
    printf("%c ",ch[i]);
  sortmin(n,ch);
  printf("\n Otsortirowannij massiw elementow\n");
  for (i=0;i<n;i++)
    printf("%c ",ch[i]);
  _getch();
  return 0;
}
