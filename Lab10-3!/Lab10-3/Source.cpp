#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	int n;
	char tmp[33];
	unsigned int value;
	const unsigned int mask = 1 << 31;
	cout << "Введите целое число" << endl;
	cin >> value;
	cin >> n;
	cout << "Двоичный вид:" << endl;
	_itoa_s(value, tmp, 2);
	cout << "Число в двоичном виде = " << tmp << endl;

	cout << "Инвертированый вид:" << endl;
	for (i = 1; i <= n; i++)
	{
		putchar(mask & value ? '0' : '1');
		value <<= 1;
		if (i % 8 == 0) putchar(' ');
	}
}