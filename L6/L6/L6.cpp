#include <iostream>
using namespace std;
int main()
{
	int f, count = 0;
	cout << "Enter f..." << endl;
	cin >> f;
	for (int i = 10; i < 100; ++i)
	{
		if (i % 10 + (i / 10) == f)
		{
			++count;
		}
	}
	cout << count << endl;
}
