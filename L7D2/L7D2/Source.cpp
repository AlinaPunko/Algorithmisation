#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, n, ch, s = 0;
	cout << "������� n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� ����� ����� " << i << " ";
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