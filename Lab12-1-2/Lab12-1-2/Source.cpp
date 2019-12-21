#include <iostream>
using namespace std;
void main()
{
	char c[100];
	int i = 0;
	void *ptr1, *ptr2;
	cout << "Vvedite predlogenie" << endl;
	gets_s(c);
	for (i = 1; c[i] != 0; i++)
	{
		ptr1 = &c[i];
		ptr2 = &c[i - 1];
		if (*(char*)ptr1 == ' ')
		{
			cout << *(char*)ptr2 << ' ';
		}
	}
	system("pause");
}

