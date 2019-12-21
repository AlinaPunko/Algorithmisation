#include <iostream>
using namespace std;
void main()
{
	float  a = -1.4;
	float m = 16;
	float j = 1.8;
	float w, r, w1;
	while (j <= 3)
	{
		w = tan(a / 3) + pow(10, a / m);
		w1 = sqrt(w + j);
		r = 0.9*w1 + abs(pow(a, 2) - 1);
		printf("w = %5.5f\t", w);
		printf("r = %5.5f\n", r);
		j = j + 0.2;
	}
}
