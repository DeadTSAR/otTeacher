#include "stdafx.h"
#include "math.h"
#include "conio.h"
int _tmain(int argc, _TCHAR* argv[])
{
//���������� ����� ������������ �� ����� �������
int i //����� ��������,
,N; //���������� ����� ��������,
double X //�������� ���������� ����������� �����
//� ��������� ����������,
,Eps //��������� �������� ���������� ����� ���������
,dX //�������� ����� ��������� � ����������
//������������� � � ���������� ��������,
//� ������ �����������
,X0 //��������� � ������� ����������� �����,
//� ������ ����������� �������
,XL, XR //��������� � ������� ����������� �����,
,YL //�������� ������� � ����� XL ���������� �����������,
,Y; //�������� ������� � ����� X ���������� �����������.
printf("Metod kasatelnyh\n");
printf("Wwedite X0, Eps, N: ");
scanf("%lf%lf%d",&X0,&Eps,&N);
//�������� ������������ ������ �����������
if ((3*pow(X0,3)-5*X0*X0+X0+0.4)*(18*X0-10) <= 0)
printf("Metod kasatelnyh ne primenim!\n");
else
{
i=0;
do
{
dX = (3*pow(X0,3)-5*X0*X0+X0+0.4)
/(9*X0*X0-10*X0+1);
X=X0-dX;
X0=X;
i++;
dX=fabs(dX);
}
while (dX>Eps && i<N);
if (dX<Eps)
printf("Koren X=%lf nayden za %d\ iteraciy,\nY(X)=%lf\n"
,X,i,3*pow(X0,3)-5*X0*X0+X0+0.4);
else
printf("Koren ne nayden za %d iteraciy\n",N);
}
//����� ����������� �������
printf("\nMetod polovinnogo delenia\n");
printf("Wwedite XL, XR, Eps, N: ");
scanf("%lf%lf%lf%d",&XL,&XR,&Eps,&N);
//�������� ������������ ������
if ((3*pow(XL,3)-5*XL*XL+XL+0.4)*(3*pow(XR,3)-5*XR*XR+XR+0.4) > 0)
printf("Metod polovinnogo delenia ne primenim!\n");
else
{
YL=3*pow(XL,3)-5*XL*XL+XL+0.4;
i=0;
do
{
X=(XL+XR)/2;
Y= 3*pow(X,3)-5*X*X+X+0.4;
if (Y*YL>0)
XL=X;
else
XR=X;
i++;
dX=fabs(XR-XL);
}
while (dX>Eps && i<N);
if (dX<Eps)
printf("Koren X=%lf nayden za %d\ iteraciy,\nY(X)=%lf\n"
,X,i,Y);
else
printf("Koren ne nayden za %d iteraciy\n",N);
}
getch();
return 0;
}