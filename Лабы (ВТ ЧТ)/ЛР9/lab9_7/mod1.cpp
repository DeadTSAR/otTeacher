#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "mod1.h"
 void input(int *m,int *n, matr b)
 {  printf("\nwwedite kol-wo strok i stolbzow\n");
    scanf("%d%d",m,n);
    printf("wwedite matrizu\n");
    for (int i=0; i<*m;i++)
      for (int j=0;j<*n;j++)
        scanf("%f",&b[i][j]);
 }
  void output(const int m,const int n,const matr b)
  {for (int i=0; i<m;i++)
     {
      for (int j=0;j<n;j++)
        printf("%6.2f   ",b[i][j]);
	  printf("\n");
      }
  }
  int maxstr(const int m,const int n,const matr b)
  {  int i,j,imax;
     float bmax;
     bmax=b[0][0];
     imax=0;
     for (i=0;i<m;i++)
       for (j=0;j<n;j++)
         if (b[i][j]>bmax) 
		 {
			 bmax=b[i][j];
             imax=i;
		 }
    return imax;
  }
  int minstr(const int m,const int n,const matr b)
  {int i,j,imin;
     float bmin;
     bmin=b[0][0];
     imin=0;
     for (i=0;i<m;i++)
       for (j=0;j<n;j++)
         if (b[i][j]<bmin) 
		 {
           bmin=b[i][j];
           imin=i;
		 }
    return imin;
  }
  void udalenie(const int m,const int n,const int nom,matr b)
  {int i,j;
     for (i=nom; i<m-1;i++) 
       for (j=0;j<n;j++)
         b[i][j]=b[i+1][j];
  }
 void zifra(unsigned int a,masbyt c,int *kol)
 {unsigned int k;
    *kol=0;
     do
	 {
       k=a%10;
       c[*kol]=k;
       (*kol)++;
       a/=10;
	 }while  (a>0);
 }
   void sortirov(const int m, matr b,masint s)
   {
     int i,k,sp;
     bool pr;
     float f;
     k=0;
     do
	  {k++;
       pr=false;
       for (i=0;i<m-k;i++) 
         if (s[i]>s[i+1]) 
		 {
           pr=true;
           sp=s[i];
           s[i]=s[i+1];
           s[i+1]=sp;
		   for (int j=0;j<m;j++)
		   {f=b[i][j];
            b[i][j]=b[i+1][j];
            b[i+1][j]=f;
		   }
		 }
	  } while (pr);
   }
