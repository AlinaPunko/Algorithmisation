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
	cout << "������� ����� �����" << endl;
	cin >> value;
	cin >> n;
	cout << "�������� ���:" << endl;
	_itoa_s(value, tmp, 2);
	cout << "����� � �������� ���� = " << tmp << endl;

	cout << "�������������� ���:" << endl;
	for (i = 1; i <= n; i++)
	{
		putchar(mask & value ? '0' : '1');
		value <<= 1;
		if (i % 8 == 0) putchar(' ');
	}
}