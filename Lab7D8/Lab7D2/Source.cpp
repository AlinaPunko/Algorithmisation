#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, ch, s = 0;
	float k = 0;
	cout << "Введите n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите число номер " << i << " ";
		cin >> ch;
		if (i % 2 == 1)
			s += ch;
		    k = k + 1;
	}
	cout <<"Среднее арифметическое "<< s/k << endl;
	return 0;
}