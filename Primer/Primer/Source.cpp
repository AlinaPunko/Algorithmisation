#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int value; int i;
	const unsigned int mask = 1 << 31;
	char tmp[33];
	cout << "¬ведите целое число ";
	cin >> value;
	cout << "ƒвоичный вид: ";
	for (i = 1; i <= 32; i++)
	{
		cout << value << endl;
		putchar(mask & value ? '1' : '0');
		_itoa_s(mask, tmp, 2);
		//cout << "mask: " << tmp << endl;//
		_itoa_s(value, tmp, 2);
		//cout << "value: " << tmp << endl;//
		value <<= 1;
		if (i % 8 == 0) putchar(' ');
	}
}
