
#include "math.h"
#include "conio.h"
int main()
{
float x //������� �������� ��������� �������
,xn //������ ������� ���������
,xk //������� ������� ���������
,dx //��� ��������� ���������
,y //������� �������� �������
,s //����� �������� �������
,p //������������ �������� �������
,srarif //������� �������������� �������� �������
,srgeom; //������� �������������� �������� �������
int i,n;
printf("wwedite xn,xk,dx");
scanf_s("%f%f%f",&xn,&xk,&dx);
n=(xk-xn)/dx+1; ;//���������� �������� ���������,
//��� ������� ����� ��������� �������� �������
s=0;
p=1;
for (i=0;i<n;i++)
{
x=xn+i*dx;
y=x*x*exp(sin(x)+cos(x));
s+=y;
p*=y;
}
printf("summa=%6.2f prois=%6.2f\n",s,p);
srarif=s/n;
srgeom=pow(p,(float)1.0/n);
printf("srarifm=%6.2f srgeom=%6.2f",srarif,srgeom);
_getch();
return 0;
}