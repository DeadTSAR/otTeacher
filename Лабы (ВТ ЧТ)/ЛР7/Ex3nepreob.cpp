#include "stdafx.h"
#include "math.h"
#include "conio.h"
int _tmain(int argc, _TCHAR* argv[])
{
double const pi = 3.1415926535;
double a, b, x, dx, z,f;
int i, N;
printf("wwedite a, b, N: ");
scanf("%lf%lf%d", &a, &b,&N);
f=sin(a);
z=0;
dx=(b-a)/N;
x=a+dx;
for (i=1;i<N;i++)
{
z=z+(f+sin(x))/2;
f=sin(x);
x=x+dx;
}
z=z*dx;
printf("z=%lf\n",z);
getch();
return 0;
}