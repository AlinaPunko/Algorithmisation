#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int i, j, n, mas[100][100];
	int *ptr;
	cout << "������� ����������� ������� n = ";
	cin >> n;
	cout << "������� �������� " << n << "x" << n << "\n\n";
	for (i = 0; i < n; ++i)
	{
		ptr = &mas[i][0];
		for (j = 0; j < n; ++j)
		{
			*ptr = rand() % 25;
			cout << *ptr << "\t";
			ptr++;
		}
		cout << "\n";
	}
	int min = mas[0][0];
	int x = 0;
	for (i = 0; i < n; ++i)
	{
		ptr = &mas[i][i];
		if (min > *(int*)ptr)
		{
			min = *(int*)ptr;
			x = i;
		}
	}
	cout << "\n����������� ������� ������� ��������� = " << min << "\n";
	cout << "����� ������� " << x << endl;
	cout << "�������: ";
	for (j = 0; j < n; ++j)
	{
		cout << mas[j][x] << endl;;
	}
	cout << "\n";
	return 0;
}