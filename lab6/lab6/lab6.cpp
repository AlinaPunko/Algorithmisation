/*2.	 �������� ������� � ���������� ������ ����������, ������� ������� �����������
�������� �������. � �� ������� ����� ����������� �������� � n ��������.*/
#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int MIN(int **Matrix, int size, int &min);
int MIN2(int ***DDDMatrix, int *MinArray, int size, ...)
{
	int *ptr = &size;
	int min = ***DDDMatrix;
	int q = 0;
	for (int i = 0; i < *(ptr + 1); i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				if (*(*(*(DDDMatrix + i) + j) + k) < min)
					min = *(*(*(DDDMatrix + i) + j) + k);
			}
		}
		for (q; q < *(ptr + 1);)
		{
			*(MinArray + q) = min;
			if (q == *(ptr + 1) - 1)
				break;
			for (i; i <= *(ptr + 1); i++)
			{
				min = ***(DDDMatrix + i + 1);
				break;
			}
			q++;
			break;
		}
	}
	cout << " __________________________________________________________________\n\n";
	for (int i = 0; i < *(ptr + 1); i++)
		cout << " ����������� ������� " << i + 1 << " �������: " << *(MinArray + i) << ". \n";
	cout << " �������� ������������ ������ ������� � ���������� ����� ����������. \n\n";
	cout << " ���� ����� ���� ������ ����� �� �������, \n������ �� ����������� ������� � ������ ���.. \n\n";
	cout << "___________________________________________________________________\n\n";
	cout << " ���������� � ������� �����: " << *(ptr + 2) << "\n";
	cout << "___________________________________________________________________\n\n";
	cout << "___________________________________________________________________\n\n";
	cout << " ���� ����� ���� ������ ������ �� �������, \n������ �� ����������� ������� � ������ ���.. \n\n";
	cout << "___________________________________________________________________\n\n";
	cout << " ���������� � ������� ������: " << (char*)(ptr + 3) << "\n\n";
	return *MinArray;
}
int main()
{
	setlocale(0, "");
	int **Matrix, *MinArray, ***DDDMatrix;
	int size, OT, DO;
	int min;
	int k, n;
	cout << " ������� ������� �������: "; cin >> size;
	Matrix = new int*[size];
	for (int i = 0; i < size; i++)
		*(Matrix + i) = new int[size];
	cout << " �������� ������� ���������� ��������� \n 1-���� ������ � ����������\n 2-��������� ��������� �����.\n\n";
	cin >> k;
	if (k == 1)
	{
		cout << "\n ������� ������: \n";
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << " ������� ������� Matrix[" << i + 1 << "][" << j + 1 << "]: "; cin >> *(*(Matrix + i) + j);
			}
		}
		cout << "\n\n ���� �������: \n\n";
		for (int i = 0; i < size; i++)
		{
			cout << "\t";
			for (int j = 0; j < size; j++)
			{
				cout << *(*(Matrix + i) + j) << "  ";
			}
			cout << "\n\n";
		}
	}
	else if (k == 2)
	{
		cout << " ������� ����������, �������� ����������� �������� �������: \n\n";
		cout << " ��: "; cin >> OT;
		cout << " ��: "; cin >> DO;

		srand(time(NULL));
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				*(*(Matrix + i) + j) = rand() % (DO - OT + 1) + OT;

		cout << " ���� �������: \n\n";
		for (int i = 0; i < size; i++)
		{
			cout << "\t";
			for (int j = 0; j < size; j++)
				cout << *(*(Matrix + i) + j) << "  ";
			cout << "\n\n";
		}
	}
	MIN((int**)Matrix, size, min);
	cout << " ����������� ������� �������: " << min << "\n\n";
	for (int i = 0; i < size; i++)
		delete[] * (Matrix + i);
	delete[]Matrix;
	cout << " ��������� ��������� ��� ����� �������.\n ������ ���������� ��������� ��� n ������. \n\n";
	cout << " ������� ���������� n ������: "; cin >> n;
	DDDMatrix = new int**[n];
	for (int j = 0; j < n; j++)
	{
		*(DDDMatrix + j) = new int*[size];
		for (int k = 0; k < size; k++)
		{
			*(*(DDDMatrix + j) + k) = new int[size];
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << " ������� �������� ��� ������� ����� " << i << ": \n";
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				cout << "\t ������� �������[" << j << "][" << k << "]: ";
				cin >> *(*(*(DDDMatrix + i) + j) + k);
			}
		}
	}
	cout << " ���� " << n << " �������: \n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				cout << *(*(*(DDDMatrix + i) + j) + k) << " ";
			}
			cout << "\n";
		}
		cout << "\n\n";
	}
	
	system("pause");
	return 0;
}

int MIN(int **Matrix, int size, int &min)
{
	min = **Matrix;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			if (*(*(Matrix + i) + j) < min)
				min = *(*(Matrix + i) + j);
	}
	return min;
}


