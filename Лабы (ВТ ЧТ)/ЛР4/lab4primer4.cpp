
#include "math.h"
#include "conio.h"
int main()
{
float x //������� �������� ��������� �������
,xn //������ ������� ���������
,xk //������� ������� ���������
,dx //��� ��������� ���������
,y //������� �������� �������
,ymax //������������ �������� �������
,ymin;//����������� �������� �������
int i,n;
printf("wwedite xn,xk,dx");
scanf_s("%f%f%f",&xn,&xk,&dx);
n=(xk-xn)/dx+1;//���������� �������� ���������,
//��� ������� ����� ��������� �������� �������
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