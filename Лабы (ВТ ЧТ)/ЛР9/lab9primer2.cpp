
#include <iostream>
using namespace std;

int fib_rek(int n) //Решение с использованием рекурсии
{
	if (n == 0) { return 0; }
	else
	{
		if ((n == -1) || (n == 1)) { return 1; }
		else
		{
			if (n > 0) { return fib_rek(n - 1) + fib_rek(n - 2); }
			else { return fib_rek(n + 2) - fib_rek(n + 1); }
		}
	}
}
void main(){
	int p;
	setlocale(0, "");
	cout << "Введите номер последовательности Фиббоначи ";
	cin >> p;
	cout <<endl<<p<<" число последовательности равно "<< fib_rek(p);
	cin.get();
	cin.get();
}
