#include <iostream>
using namespace std;
void main()
{
	float x, y, n = 1;
	setlocale(LC_CTYPE, "Russian");
	cout << "������� ������� �� ������ ���� (X)" << endl;
	cin >> x;
	cout << "Y - ������� �� ��������� ����" << endl;
	cout << "������� Y " << endl;
	cin >> y;
	if (x > y)
	{
		cout << " ������ " << endl;
		exit(0);
	}

	while (x <= y)
	{
		n = n + 1;
		x = 1.03*x;
	}
	cout << "�� " << n << " ���� ������� �������� " << x << endl;
}
