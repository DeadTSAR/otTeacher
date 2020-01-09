#include "stdafx.h"
#include "math.h"
#include "conio.h"
int _tmain(int argc, _TCHAR* argv[])
{
double const pi = 3.1415926535;
double a, b, x, dx, z;
int i, N;
printf("wwedite a, b, N: ");
scanf("%lf%lf%d", &a, &b,&N);
z=(sin(a)+sin(b))/2;
dx=(b-a)/N;
x=a+dx;
for (i=1;i<N;i++)
{
z=z+sin(x);
x=x+dx;
}
z=z*dx;
printf("z=%lf\n",z);
getch();
return 0;
}