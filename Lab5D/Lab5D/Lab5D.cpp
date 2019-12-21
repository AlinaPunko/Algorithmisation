#include <iostream>
using namespace std;
void main()
{
	float x, y, n = 1;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите выручку за первый день (X)" << endl;
	cin >> x;
	cout << "Y - выручка за некоторый день" << endl;
	cout << "Введите Y " << endl;
	cin >> y;
	if (x > y)
	{
		cout << " Ошибка " << endl;
		exit(0);
	}

	while (x <= y)
	{
		n = n + 1;
		x = 1.03*x;
	}
	cout << "На " << n << " день выручка составит " << x << endl;
}
