
#include <iostream>
using namespace std;

int fib_rek(int n) //������� � �������������� ��������
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
	cout << "������� ����� ������������������ ��������� ";
	cin >> p;
	cout <<endl<<p<<" ����� ������������������ ����� "<< fib_rek(p);
	cin.get();
	cin.get();
}
