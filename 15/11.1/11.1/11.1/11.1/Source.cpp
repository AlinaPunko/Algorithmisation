#include<iostream>
#define Pi 3.14
using namespace std;
double f(double *x);
double f1(double *x);
double f2(double *x);
double Logic(double *a, double *b, double e, double *x1);
int main()
{
	setlocale(0, "");
	double a=-1, b=1, x1, e = 0.0001;
	Logic(&a, &b, e, &x1);
	cout << " ������: " << x1 << endl;
	system("pause");
}

double f(double *x)
{
	return sin(*x) + (*x)*(*x)*(*x);
}

double f1(double *x)
{
	return cos(*x) + 3 * (*x)*(*x);
}

double  f2(double *x)
{
	return -sin(*x) + 6 * (*x);
}

double Logic(double *a, double *b, double e, double *x1)
{
	double x;
	if (f(a)*f2(a) > 0)
	{
		*x1 = *a;
	}
	else
		*x1 = *b;
	x = *x1;
	do
	{
		x = *x1;
		*x1 = x - (f(&x) / f1(&x));
	} while (abs(*x1 - x) > e);
	return *x1;
}