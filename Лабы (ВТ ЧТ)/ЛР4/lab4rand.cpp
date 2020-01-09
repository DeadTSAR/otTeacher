
#include "math.h"
#include "time.h"
#include "stdlib.h"
int main()
{
const int n=10;
double X[n], Y[n], X0, dX, Pi;
int i;
srand(time(0));
//printf("Enter X0 :");
//scanf("%lf",&X0);
//printf("Enter dX :");
//scanf_s("%lf",&dX);
Pi=3.14158;//Pi=atan(1.0)*4.0;
for (i=0; i<n; i++)
{
//X[i]=X0;
//Y[i]=sin(X0*Pi/180);
//X0+=dX;
	X[i]=rand()%360;
	Y[i]=sin(X[i]*Pi/180);
	//RAND_MAX
}
for (i=0; i<n; i++)
printf("%6.2lf\t%lf\n",X[i],Y[i]);
return 0;
}