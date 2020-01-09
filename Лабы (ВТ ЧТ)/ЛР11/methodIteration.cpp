///*Составить программу нахождения корня уравнения (X-0,1)4 –X + 0,1=0 с заданной точностью ε тремя описанными
//выше методами и определить количество шагов, за которое эта точность будет достигнута. */

#include<iostream>
#define eps 0.001
#define N 1000000
using namespace std;

double f(double x)
{
	return (sin(2 * x) - x);
}

double f1(double x)
{
	return (asin(x) / 2);
}

void simple(double x0)
{
	double x, dx;
	cout << "Simple itaration method" << endl;

	if (abs(2 * cos(2 * x0)) < 1) {
		int i = 0;
		do {
			x = sin(2 * x0);
			dx = x - x0;
			x0 = x;
			++i;
		} while ((abs(dx)) > eps);

		cout << "The root is " << x0 << " Iterations= " << i << endl;

	
	}
	else if (abs(2 * cos(2 * x0)) > 1) {
		int i = 0;
		do {
			x = asin(x0) / 2;
			dx = x - x0;
			x0 = x;
			++i;
		} while ((abs(dx)) > eps);

		cout << "The root is " << x0 << " Iterations= " << i << endl;
	}

	else cout << "The method of simple iteration is not applicable\n ";
}

void tangent(double x0)
{
	double x, dx;
	cout << endl;
	cout << "Tangent method" << endl;

	if ((sin(2 * x0) - x0) * (-4 * sin(2 * x0)) <= 0)
		cout << "The method of tangent is not applicable\n";
	else
	{
		int i = 0;
		do
		{
			dx = f(x0)
				/ (2 * cos(2 * x0) - 1);
			x = x0 - dx;
			x0 = x;
			i++;

			dx = fabs(dx);
		} while (dx > eps and i < N);
		if (dx < eps)
			cout << "The root is " << x0 << " Iterations= " << i << endl;

		else
			cout << "Does not have root for iterations\n " << N;
	}
}

double half(double x0)
{
	double x, dx;
	cout << endl;
	cout << "Half division method" << endl;
	// F(XL)·F(XR)<0
	double xL, xR;
	cout << "Enter [xL,xR] and xL < xR" << endl;
	cin >> xL >> xR;
	if (f(xL) * f(xR) < 0) {
		int i = 0;
		do {
			x = (xL + xR) / 2;
			if (f(xL) * f(x) > 0) xL = x;
			else xR = x;
			i++;
			dx = abs(xR - xL);
		} while (dx > eps and i < 100);
		if (dx > eps) cout << "Does not have root for iterations\n " << N << endl;
		else if (dx < eps) cout << "The root is " << x << " Iterations= " << i << endl;

	}
	else cout << "Half division method is not aplicable\n" << endl;
	return (xL + xR) / 2;
}



int main()
{
	double x0;
	cout << "Enter the first value x0 = ";
	cout << endl;
	cin >> x0;
	simple(x0);
	tangent(x0);
	half(x0);
	system("pause");
	return 0;
}