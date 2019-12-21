#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
void letters(char *str);

int main(void)
{
	char temp;
	char s[80];
	puts("Input char");
	gets_s(s);
	letters(s);
	return 0;
}
void letters(char *str)
{
	char temp;
	for (int t = 0; str[t]; t=t+2)
	{
		temp=str[t];
		str[t] = str[t + 1];
		str[t + 1] = temp;
		cout << str[t]<<str[t+1];
	}
}
