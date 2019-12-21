#include<iostream>
using namespace std;
double Koren_0(double(*f)(double), double(*f2)(double), double a, double b, double *x1);
double f(double x);
double f1(double x);
double f2(double x);
double Logic(double(*f1)(double), double(*f2)(double), double *x1, double e);
int main()
{
	setlocale(0, "");
	double a, b, x1, x, e = 0.0001;
	cout << "################################################################################\n";
	cout << "\t\t\t Функция f(x) = sin(x) + x^3\n\n\n";
	cout << " f'(x) = cos(x) + 3 * x^2\n\n";
	cout << " f''(x) = -sin(x) + 6 * x)\n\n";
	cout << "################################################################################\n";
	cout << " Введите начальное и конечное значение а и b: \n\n";
	cout << " Введите а: "; cin >> a;
	cout << " Введите b: "; cin >> b;
	cout << "################################################################################\n";
	Koren_0(f, f2, a, b, &x1);
	cout << " Начальный корень равен: " << x1 << endl;
	Logic(f1, f2, &x1, e);
	cout << " Корень уравнения: " << x1 << endl;
	cout << "################################################################################\n";
	cout << "Программа завершена..\n";
	system("pause");
	return 0;
}
double Koren_0(double(*f)(double), double(*f2)(double), double a, double b, double *x1)
{
	if (f(a)*f1(a) > 0)
		*x1 = a;
	else
		*x1 = b;
	return *x1;
}
double f(double x)
{
	return (sin(x) + x*x*x);
}
double f1(double x)
{
	return(cos(x) + 3 * x*x);
}
double f2(double x)
{
	return(-sin(x) + 6 * x);
}
double Logic(double(*f1)(double), double(*f2)(double), double *x1, double e)
{
	double x;
	x = *x1;
	do
	{
		*x1 = x - ((f(x) + x*x*x) / (f1(x) + 3 * x*x));
		x = *x1;
	} while (abs(*x1 - x) > e);
	return *x1;
}