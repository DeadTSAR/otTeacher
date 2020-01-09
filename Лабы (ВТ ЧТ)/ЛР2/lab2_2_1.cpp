#include <iostream>
#include "math.h"
using namespace std;

int main() {
	float a, b, c;
	cout << "Enter a,b,c:";
	cin >> a >> b >> c;
	if (a <= 0 || b <= 0 || c <= 0)
		cout << "Wrong data";
	else if (a + b == c || a + c == b || b + c == a)
		cout << "Line";
	else if (a == b && b == c)
		cout << "Ravnostoronniy";
	else if (a*a + b * b == c * c || a * a + c * c == b * b ||
		b * b + c * c == a * a)
		cout << "Pryamougolniy";
	else if (a == b || b == c || a == c)
		cout << "Ravnobedrenniy";
	else cout << "Normal triangle";
	system("pause");
	return 0;
}