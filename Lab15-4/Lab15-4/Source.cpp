#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
void letters(char *str);

int main(void)
{
	char s[80], l;
	puts("Input char");
	gets_s(s);
	letters(s);
	return 0;
}
void letters(char *str)
{
	int t;
	char l;
	puts("Input letter");
	cin >> l;
	for (t = 0; str[t]; ++t)
	{
		if (str[t] == l)
			str[t] = ' ';
		cout << str[t];
	}
	
}
