// основная функция
#include "conio.h"
#include "math.h"
#include "mod1.h"

int main()
{  matr b;
   int m,n,imax,imin,i,j,kol;
   masbyt c;
   masint s;
   input(&m,&n,b);
   output(m,n,b);
   imax=maxstr(m,n,b);
   imin=minstr(m,n,b);
   printf("\nnomer stroki,sodershaschei max element=%3d",imax);
   printf("\nnomer stroki,sodershaschei min element=%3d",imin);
   if (imax>imin) 
   {
    udalenie(m,n,imax,b);
    udalenie(m,n,imin,b);
    m=m-2;
   }
  else if (imin>imax) 
  {
    udalenie(m,n,imin,b);
    udalenie(m,n,imax,b);
    m=m-2;
   }
   printf("\nmatriza s udalennimi strokami\n");
   output(m,n,b);
   for (i=0;i<m;i++) 
   {unsigned int a;
    a=abs(b[i][n-1]);
    zifra(a, c, &kol);
    s[i]=0;
    for (j=0; j<kol;j++)
	{
      printf("%2d ",c[j]);
      s[i]+=c[j];
	}
    printf("  summa=%4d\n",s[i]);
   }
   sortirov(m,b,s);
   printf("\nmatriza s otsortirowannimi strokami\n");
   output(m,n,b);
   printf("\n");
   for (i=0;i<m;i++) 
     printf("%3d ",s[i]);

   _getch();
	return 0;
}

