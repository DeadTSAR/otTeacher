
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
//Вывод заголовка таблицы
printf("%s%s"," # DX DP ","DP1 DP2 |DP-DP1|");
//Переменная DX будет представлять
//текущее приращение аргумента
DX=0.5;
for (I=1;I<10;I++)
{
//Вычисление точного значения DP(X)
DP=log((X+DX)*(X+DX)-1)/(X+DX-1)-log(X*X-1)/(X-1);
//Вычисление значений дополнительных переменных
X1=X+DX/2; K=X1*X1; R=K-1; D=X1-1;
//Вычисление приближенных значений DP(X)
//с использованием дополнительных переменных
DP1=(2 * X1 * D - R * log(R)) / R / D*D*DX;
//без использования дополнительных переменных
DP2=(2*(X+DX/2)*(X+DX/2-1)-((X+DX/2)*(X+DX/2)-1)*log((X+DX/2)*(X+DX/2)-1))/((X+DX/2)*(X+DX/2)-1)/(X+DX/2-1)/(X+DX/2-1)*DX;
//Вывод в строку таблицы вычисленных значений
printf("\n%3d%10.5lf %12.6lf %10.6lf %9.6lf %e",I,DX,DP,DP1,DP2,fabs(DP-DP2));
//Изменение значения приращения аргумента
DX=DX/2;
}//конец for
printf("\n");
_getch();
return 0;
}

