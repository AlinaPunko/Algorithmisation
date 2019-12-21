#include <iostream>
using namespace std;
int main()
{
	int x, y;
	float sum;
	char znak;
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите действие(+,-,*,/,%): ";
	cin >> znak;
	cout << endl;
	cout << "Введите первое число: ";
	cin >> x;
	cout << endl;
	cout << "Введите второе число: ";
	cin >> y;
	cout << endl;
	if (znak == '+')
	{
		sum = x + y;
		cout << "Ответ: " << sum << endl;
		
	}
	else if (znak == '-')
	{
		sum = x - y;
		cout << "Ответ: " << sum << endl;
	
	}
	else if (znak == '*')
	{
		sum = x*y;
		cout << "Ответ: " << sum << endl;
	
	}
	else if (znak == '/')
	{
		sum = x / y;
		cout << "Ответ: " << sum << endl;
		
	}
	else if (znak == '%')
	{
		sum = 0.01*x*y;
		cout << "Ответ: " << sum << endl;

	}
}