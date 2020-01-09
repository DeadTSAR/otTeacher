
#include "math.h"
int main()
{
const int n=10;
double X[n], Y[n], X0, dX, Pi;
int i;
printf("Enter X0 :");
scanf("%lf",&X0);
printf("Enter dX :");
scanf_s("%lf",&dX);
Pi=atan(1.0)*4.0;
for (i=0; i<n; i++)
{
X[i]=X0;
Y[i]=sin(X0*Pi/180);
X0+=dX;
}
for (i=0; i<n; i++)
printf("%6.2lf %lf\n",X[i],Y[i]);
return 0;
}