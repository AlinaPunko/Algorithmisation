#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, n, ch, s = 0;
	cout << "¬ведите n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "¬ведите число номер " << i << " ";
		cin >> ch;
		if (ch < 0)
		{
			a = i;
		break;
		}
	}
	cout << a << endl;
	return 0;
}