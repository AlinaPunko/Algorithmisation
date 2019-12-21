#include <iostream>
using namespace std;
void main()
{
	char c[100];
	int i = 0;
	cout << "Vvedite predlogenie"  << endl;
	gets_s(c);
	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] == ' ')
		{
			cout << c[i - 1]<< ' ' ;
		}
	}
	system("pause");
}