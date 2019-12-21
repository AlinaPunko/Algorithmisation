#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
char *deleteletters(char *letter, int n, char l)
{
	char *deleteletter;
	for (letter = deleteletter; n > 0; letter++, n--)
		if (*letter == l) letter = deleteletter;
	return deleteletter;
}

char main()
{
	char s[20];
	char deleteletter;
	puts("Input char");
	gets_s(s);
	char l;
	puts("Input letter");
	cin >> l;
	(*deleteletters(s, 20, l)) = ' ';
	for (int i = 0; i < 5; i++)
		printf("%d ", s[i]);

}
