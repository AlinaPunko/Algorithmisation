#include <iostream>
#include <ctime>
using namespace std;
void massiv();
void matrix();

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int c;
		cout << endl;
		cout << "�������" << endl;
		cout << "1-���������� ������" << endl;
		cout << "2-������ � ��������" << endl;
		cout << "3-�����" << endl;
		cin >> c;
		switch (c)
		{
		case 1: massiv(); break;
		case 2: matrix(); break;
		case 3: break;
		}

}

void massiv()
{
	int  n, k;
	cout << "������� n= ";
	cin >> n;
	int *A = new int[n];
	srand(time(0));
	for (int k = 0; k < n; k++)
	{
		A[k] = rand() % 5;
		cout << A[k] << " ";
	}
	cout << endl;
	cout << "��������, ������ ���� " << endl;
	for (k = 0; k < n; k++)
	{
		if (A[k] == 0)
			cout << "A[" << k << "]=" << A[k] << endl;
	}
	cout << endl;
	cout << "���������� ������ �������� �������� " << endl;
	for (k = 0; k < n; k++)
	{
		if (A[k] == 0)
		{
			cout << k;
			break;
		}
	}
	cout << endl;
	system("pause");
}

void matrix()
{
	int  **A, k, j, i, size = 8;
	srand(time(0));
	A = new int*[size];
	for (i = 0; i < size; i++)
	{
		A[i] = new int[size];
		for (j = 0; j < size; j++)
		{
			cout << "������� ����� A[" << i << "]" << "[" << j << "]" << endl;
			cin >> A[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			cout << A[i][j] << ' ';
		}
		cout << endl;
		cout << endl;
	}
	for (i = 0; i<8; i++)
	{
		k = 1;
		for (j = 0; j<8; j++)
			if (A[i][j] != A[j][i])
				k = 0;
		if (k == 1)
			cout << k << "- �� ������� ������������" << k << "-�� ������" << endl;
	}
	system("pause");
}