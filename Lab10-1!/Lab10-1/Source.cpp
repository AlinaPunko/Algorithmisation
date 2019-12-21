#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, i; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);

	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 15) == 0)
		cout << "Число кратно 16" << endl;
	else
		cout << "Число не кратно 16" << endl;
}
