/*����������� ��������� � ���������� ������, ������� ������� 
������ ������ �� ������, ������ � ��������� � �. �. */
#include<iostream>
#include<windows.h>
using namespace std;
char Function(char *string, int n);
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char *string;
	int n;
    cin >> n;
	string = new char[n + 1];
	cout << " ������� ������: "; 
	cin >> string;
	Function(string, n);
	cout << " ������������� ������: " << string << "\n\n\n";
	system("pause");
	return 0;
}
char Function(char *string, int n)
{
	char Letter;
	for (int i = 0; *(string + i) != '\0';)
	{
		Letter = *(string + i);
		if (*(string + i + 1) == '\0')
			break;
		*(string + i) = *(string + i + 1);
		*(string + i + 1) = Letter;
		i += 2;
	}
	return *string;
}



