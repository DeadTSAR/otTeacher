//  ��������� ���� ����������� ������������ ������

#include "stdio.h"
#include "conio.h"
void input(float ***a,int *n);
void output(float **a,int n);
void preob(float **a,float **b,float ***c,int n);
int main()
{ 
	float **a,**b,**c;
  int n,m;
  input(&a,&n);
  input(&b,&m);
  printf("\nmatriza a\n");
  output(a,n);
  printf("\nmatriza b\n");
  output(b,m);
  if (n==m)
  {
    preob(a,b,&c,n);
    printf("\nmatriza c\n");
    output(c,n);
  }
  getch();
	return 0;
}
//������� ����� ���������� ����� ������������ ������� � ����� �������
void input(float ***a,int *n)
{
	printf("wwedite kol-wo strok matrizi\n");
  scanf("%d",n);
  *a=new float *[*n];//��������� ������ ��� ������� ���������� �� ������ 
                    // �������
  for (int i=0;i<*n;i++)
     (*a)[i]=new float [i+1];// ��������� ������ ��� ������ ������ �������
  printf("\nwwedite elementi\n");
    for(int i=0;i<*n;i++)
		for (int j=0; j<=i;j++)
	      scanf("%f",&(*a)[i][j]);
}
void output(float **a,int n)
{ 
	for (int i=0;i<n;i++)
   {
    for (int j=0; j<=i;j++)
       printf("%5.1f  ",a[i][j]);
	printf("\n");
    }
}
void preob(float **a,float **b,float ***c,int n)
{
	*c=new float *[n]; //��������� ������ ��� ������� ���������� �� ������ �����  
                    //�������-����������
  for (int i=0;i<n;i++)  //��������� ������ ��� ������ ������ �������-
                         //����������
     (*c)[i]=new float [i+1];
   for (int i=0;i<n;i++)
     for (int j=0; j<=i;j++)
	   (*c)[i][j]=a[i][j]-b[i][j];
}
