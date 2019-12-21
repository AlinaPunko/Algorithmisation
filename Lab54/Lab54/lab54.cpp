#include <iostream>
using namespace std;
void main()
{
	float x, y, n, ;
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
	n = 1;
	do
	{
		n = n + 1;
		x = x + (x / 100 * 3);
	} while (x >= y);
	cout << 'На' << n << 'день выручка составит' << p << endl;
}


