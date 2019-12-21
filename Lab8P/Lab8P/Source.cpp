#include <iostream>
using namespace std;

float f(float x) 
{
	return sin(x) + 1;
}

int main() 
{
	float a, b, n;
	a = 1; b = 3; n = 200;
	float h = (b - a) / (2 * n);
	float x = a + 2 * h;
	float s1 = 0, s2 = 0, i = 1;
	do 
	{
		s2 += f(x);
		x += h;
		s1 += f(x);
		x += h;
		i += 1;
	} while (i < n);
	cout << (h / 3)*(f(a) + 4 * f(a + h) + 4 * s1 + 2 * s2 + f(b));
	system("pause");
}