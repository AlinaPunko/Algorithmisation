#include <iostream>
using namespace std;
void main()
{
	float x, y, n, ;
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
	n = 1;
	do
	{
		n = n + 1;
		x = x + (x / 100 * 3);
	} while (x >= y);
	cout << '��' << n << '���� ������� ��������' << p << endl;
}


