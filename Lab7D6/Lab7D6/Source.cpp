#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, ch, s= 0 , p = 1;
	cout << "������� n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� ����� ����� " << i << " ";
		cin >> ch;
		if (ch > 0)
			s += ch;
		if (ch < 0)
			p*= ch;
	}
	cout << "����� ������������� " << s << endl;
	cout << "������������ ������������� " << p << endl;
	return 0;
}