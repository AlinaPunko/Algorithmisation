#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int i, j, n, mas[100][100];
	void *ptr;
	cout << "������� ����������� ������� n = ";
	cin >> n;
	cout << "������� �������� " << n << "x" << n << "\n\n";
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			mas[i][j] = rand() % 25;
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	int max = mas[0][0];
	int x = 0;
	for (i = 0; i < n; ++i)
	{
		ptr=&mas[i][i];
		if (max < *(int*)ptr)
		{
			max = *(int*)ptr;
			x = i;
		}
	}
	cout << "\n������������ ������� ������� ��������� = " << max << "\n";
	cout << "����� ������ " << x<< endl;
	cout << "������: ";
	for (j = 0; j < n; ++j)
	{
		cout << mas[x][j] << " ";
	}
	cout << "\n";
	return 0;
}