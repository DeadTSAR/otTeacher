
#include "math.h"
#include "conio.h"
int main()
{
const int nn=30;
float y[nn] //массив данных
,s //
,p //
,srarif //
,srgeom;//
int i
,n;
printf("wwedite kol-wo n");
scanf_s("%d",&n);
printf("\nwwedite massiv\n");
for (i=0;i<n;i++)
scanf_s("%f",&y[i]);
s=0;
p=1;
for (i=0;i<n;i++)
{
	s+=y[i];
p*=y[i];
}
printf("summa=%6.2f prois=%6.2f\n",s,p);
srarif=s/n;
srgeom=pow(p,(float)1.0/n);
printf("srarifm=%6.2f srgeom=%6.2f",srarif,srgeom);
_getch();
return 0;
}