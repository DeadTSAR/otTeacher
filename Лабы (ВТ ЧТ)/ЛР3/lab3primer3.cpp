
#include "conio.h"
#include <iostream>
using namespace std;
#include "math.h"

int main()
{
setlocale(0,"");
const double X=1.5;
double DP,DP1,DP2,D,R,K,X1,DX;
int I,N;
//����� ��������� �������
printf("%s%s"," # DX DP ","DP1 DP2 |DP-DP1|");
//���������� DX ����� ������������
//������� ���������� ���������
DX=0.5;
for (I=1;I<10;I++)
{
//���������� ������� �������� DP(X)
DP=log((X+DX)*(X+DX)-1)/(X+DX-1)-log(X*X-1)/(X-1);
//���������� �������� �������������� ����������
X1=X+DX/2; K=X1*X1; R=K-1; D=X1-1;
//���������� ������������ �������� DP(X)
//� �������������� �������������� ����������
DP1=(2 * X1 * D - R * log(R)) / R / D*D*DX;
//��� ������������� �������������� ����������
DP2=(2*(X+DX/2)*(X+DX/2-1)-((X+DX/2)*(X+DX/2)-1)*log((X+DX/2)*(X+DX/2)-1))/((X+DX/2)*(X+DX/2)-1)/(X+DX/2-1)/(X+DX/2-1)*DX;
//����� � ������ ������� ����������� ��������
printf("\n%3d%10.5lf %12.6lf %10.6lf %9.6lf %e",I,DX,DP,DP1,DP2,fabs(DP-DP2));
//��������� �������� ���������� ���������
DX=DX/2;
}//����� for
printf("\n");
_getch();
return 0;
}

