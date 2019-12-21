#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, ch, s= 0 , p = 1;
	cout << "Введите n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите число номер " << i << " ";
		cin >> ch;
		if (ch > 0)
			s += ch;
		if (ch < 0)
			p*= ch;
	}
	cout << "Сумма положительных " << s << endl;
	cout << "Произведение отрицательных " << p << endl;
	return 0;
}