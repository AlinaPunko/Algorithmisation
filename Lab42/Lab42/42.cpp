#include <iostream>
using namespace std;
int main()
{
	int x, y;
	float sum;
	char znak;
	setlocale(LC_CTYPE, "Russian");
	cout << "������� ��������(+,-,*,/,%): ";
	cin >> znak;
	cout << endl;
	cout << "������� ������ �����: ";
	cin >> x;
	cout << endl;
	cout << "������� ������ �����: ";
	cin >> y;
	cout << endl;
	if (znak == '+')
	{
		sum = x + y;
		cout << "�����: " << sum << endl;
		
	}
	else if (znak == '-')
	{
		sum = x - y;
		cout << "�����: " << sum << endl;
	
	}
	else if (znak == '*')
	{
		sum = x*y;
		cout << "�����: " << sum << endl;
	
	}
	else if (znak == '/')
	{
		sum = x / y;
		cout << "�����: " << sum << endl;
		
	}
	else if (znak == '%')
	{
		sum = 0.01*x*y;
		cout << "�����: " << sum << endl;

	}
}