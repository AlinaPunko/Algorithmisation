#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int i, j, n;
	int **mas = NULL;
	cout << "������� ����������� ������� n = ";
	cin >> n;
	cout << "������� �������� " << n << "x" << n << "\n\n";
	mas = new int*[n];
	for (i = 0; i < n; ++i)
	{
		mas[i] = new int[n];
		for (j = 0; j < n; ++j)
		{
			mas[i][j] = rand() % 25;
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	int min = mas[0][0];
	int x = 0;
	for (i = 0; i < n; ++i)
	{
		if (min > mas[i][i])
		{
			min = mas[i][i];
			x = i;
		}
	}
	cout << "\n����������� ������� ������� ��������� = " << min << "\n";
	cout << "����� ������� " << x << endl;
	cout << "�������: ";
	for (j = 0; j < n; ++j)
		{
		cout << mas[j][x] << " ";
		}
	cout << "\n";
	return 0;
}