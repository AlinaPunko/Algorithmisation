#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m = 7;
	char ch;
	int c = 0, w = 0, s = 0;
	ch = getchar();
	
	while (ch != '*')
	{
		c++;
		if (ch == ' ' || ch == '\n')
		{
			w++;
		}


		if (ch == '\n')
		{
			s++;
		}
		ch = getchar();
	}
	cout << c << endl;
	cout << w << endl;
	cout << s << endl;
}