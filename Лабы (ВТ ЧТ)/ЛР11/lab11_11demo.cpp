
#include<iostream>
#include <time.h>
using namespace std;
/* 
Формирование случайных чисел.
Метод Неймана середины квадратов
Текущее случайное число возводится в квадрат,
после чего выбираются 10 цифр в середине числа
*** При проверке работоспособности используется обработчик исключений
*/
int midpoints()
{  
	union ud{
		double d;
		unsigned char u[8];
	}u1;
	union un{
		int n;
		unsigned char u[4];
	}u2;
	static int number=0; // Результат
	// Первое число принимается от таймера
	if(!number)number=(int)time( 0 );
	u1.d=(double)number;
	u1.d *= u1.d; // Возведение в квадрат
	for(int i=0; i<4; i++){
		// Извлекаем очередное число
		u2.u[i]=u1.u[i+2];
	}
	number=u2.n;
	number=number & 0x7fffffff;// Убирается знаковый разряд
	return number;
}

#define N 100000
void main(){
	int mas[N];
		for(int i=0; i<N; i++){
			mas[i]=midpoints();
			cout<<mas[i]<<"\t"
		}
	system("pause");
}
