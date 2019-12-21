#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int start1;
	int count1;
	int start2;
	unsigned int a;
	unsigned int b;
	int start = 8;
	int count = 8;
	cout <<"¬ведите p" << endl;	
	cin >> start1;
	cout << "¬ведите m" << endl;
	cin >> count1;
	cout <<"¬ведите q" << endl;	
	cin >> start2;
	cout << "¬ведите a" << endl;
	cin >> a;
	cout << "¬ведите b" << endl;
	cin >> b;
	for (int i = start; i < start + count; i++)
		a |= 1 << i;
	for (int i = 31; i >= 0; i--)
	{
		cout << ((a >> i) & 1);
		if (i % 8 == 0)
			cout << " ";
	}
	cout << endl;

	for (int i = start1, j = start2; i < start1 + count1; i++, j++)
	{
		int value = a >> i & 1;
		if (((b >> j) & 1) != value)
			b ^= 1 << j;
	}
	for (int i = 31; i >= 0; i--)
	{
		cout << ((b >> i) & 1);
		if (i % 8 == 0)
			cout << " ";
	}
	cout << endl;
}