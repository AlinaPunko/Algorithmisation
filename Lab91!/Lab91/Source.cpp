#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, s, max, m;
	cout << "������� ������ �������" << endl;
	cin >> n;
	cout << "������� ������������ �������� �������� �������" << endl;
	cin >> max;
	if (n < 9)
	{
		cout << "�������" << endl;
		system("Pause");
		exit(1);
	}
	int *arr = new int[n];
	srand(time(0));
	cout << "������� ��������" << endl;
	for (m = 0; m < n; m++)
	{
		arr[m] = rand() % (max + 1);
	}
	for (m = 0; m < n; m++)
	{
		cout << arr[m] << '\t';
	}
	cout << endl << endl << endl;
	for (int Raz = 0; Raz < 5; Raz++)
	{
		k = 0;
		while ((arr[k] % 2) == 0)
		{
			k++;
			if (k >= n)
			{
				cout << "� ������� ������ 5 �������� ���������" << endl;
				system("Pause");
				exit(1);
			}
		}
		for (int i = k; i < n - 1; i++)
		{
			s = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = s;
		}
	}
	arr[n - 6] = NULL;
	arr[n - 7] = NULL;
	arr[n - 8] = NULL;
	for (int m = 0; m < n - 5; m++)
		cout << m << ") ������� =" << arr[m] << endl;
	delete[]arr;
	system("Pause");
}