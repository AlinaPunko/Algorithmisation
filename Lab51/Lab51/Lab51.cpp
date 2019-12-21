#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	for (int n = 1; n <= 3; n++)
	{
		float  a = -1.4;
		float m = 16;
		float j, w, r, w1;
		cout << "¬ведите j" << endl;
		cin >> j;
		w = tan(a / 3) + pow(10, a / m);
		cout << w << endl;
		w1 = sqrt(w + j);
		r = 0.9*w1 + abs(pow(a, 2) - 1);
		cout << r << endl;
	}

}
