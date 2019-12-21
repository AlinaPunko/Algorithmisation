#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a;
	int m = 16;
	float w, r, w1;

	float j = 0.1;
	while (j <= 0.4)
	{
		for (int n = 1; n <= 3; n++)
		{
			cout << "¬ведите a" << endl;
			cin >> a;
			w = tan(a / 3) + pow(10, a / m);
			cout << w << endl;
			w1 = sqrt(w + j);
			r = 0.9*w1 + abs(pow(a, 2) - 1);
			cout << r << endl;
			j = j + 0.1;
		}
	}
}
