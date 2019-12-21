#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
char *deleteletter(char *letter, int n);

char main()
{
	char *string;
	int n = 10;
	string = new char[n + 1];
	cout << " ¬ведите строку: ";
	cin >> string;
	*deleteletter(string,11) = ' ';
	for (int i = 0; i < 20; i++)
		printf("%d ", string[i]);

}
char *deleteletter(char *letter, int n)
{
	char l;
	puts("Input letter");
	cin >> l;
	char *deleteletter;
	for (letter = deleteletter; n > 0; letter++, n--)
		if (*letter == l) letter = deleteletter;
	return deleteletter;
}