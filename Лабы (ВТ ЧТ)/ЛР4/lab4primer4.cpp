
#include "math.h"
#include "conio.h"
int main()
{
float x //текущее значение аргумента функции
,xn //нижн€€ граница интервала
,xk //верхн€€ граница интервала
,dx //шаг изменени€ аргумента
,y //текущее значение функции
,ymax //максимальное значение функции
,ymin;//минимальное значение функции
int i,n;
printf("wwedite xn,xk,dx");
scanf_s("%f%f%f",&xn,&xk,&dx);
n=(xk-xn)/dx+1;//количество значений аргумента,
//при которых будут вычислены значени€ функции
y=xn*sin(xn)-xn/2*cos(xn/2);
ymax=ymin=y;
for (i=1;i<n;i++)
{
x=xn+i*dx;
y=x*sin(x)-x/2*cos(x/2);
if(y>ymax)
ymax=y;
else
	if(y<ymin)
ymin=y;
}
printf("ymax=%6.2f ymin=%6.2f\n",ymax,ymin);
_getch();
return 0;
}