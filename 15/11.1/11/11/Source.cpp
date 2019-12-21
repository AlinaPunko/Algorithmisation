#include<iostream>
using namespace std;
int main()
{
	long double a, b, x1, x;
	a = 100;
	b = 200000;
	double e = 0.0001;
	if (((sin(a) + a*a*a)*(-sin(a) + 6 * a)) > 0)
		x1 = a;
	else if (((sin(a) + a*a*a)*(-sin(a) + 6 * a)) < 0)
		x1 = b;
	x = x1;
	for (;;)
	{
		x1 = x - ((sin(x) + x*x*x) / (cos(x) + 3 * x*x));
		if (abs(x1 - x) > e)
		{
			x = x1;
			continue;
		}
		else
		{
			break;
		}
	}
	cout << x1 << endl;
	system("pause");
}
