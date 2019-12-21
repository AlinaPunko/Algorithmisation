/*1. ���� ������������� ���������� �������. ���������� ����� ��������� � ��� �������, ������� �� �������� ������������� ���������.*/
#include<iostream>
using namespace std;
void MyFunction(int (**Matrix), int size, int &sum);
int main()
{
	setlocale(0, "");
	int size;
	int **Matrix;
	int sum = 0;
	cout << "################################################################################\n";
	cout << "\t\t\t������� �1\n\n\n";
	cout << "################################################################################\n";
	cout << " ������� ������ ���������� �������: "; cin >> size;
	Matrix = new int*[size];
	for (int i = 0; i < size; i++)
	{
		*(Matrix + i) = new int[size];
		if (*(Matrix + i) == NULL)
		{
			cout << " �� ������� �������� ������. \n\n";
			system("pause");
			return 0;
		}
	}
	cout << " ������ ��� ������� ��������. \n\n";
	cout << "################################################################################\n";
	cout << " ������� �������� �������: \n\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << " ������� ������� ������� Matrix[" << i + 1 << "][" << j + 1 << "]: "; cin >> *(*(Matrix + i) + j);
		}
	}
	cout << "################################################################################\n";
	cout << "\n\n\n ���� �������: \n\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\t";
		for (int j = 0; j < size; j++)
		{
			cout << *(*(Matrix + i) + j) << "    ";
		}
		cout << "\n\n";
	}
	cout << "################################################################################\n";
	MyFunction((int**)Matrix, size, sum);
	cout << "################################################################################\n";
	cout << " ���������� ���������� ��������� � ������� main()\n\n";
	cout << " ����� ��������� � ������� � �����. ����������: " << sum << "\n\n";
	for (int i = 0; i < size; i++)
		delete[] * (Matrix + i);
	delete[]Matrix;
	cout << "################################################################################\n";
	cout << " ������� ������ ��������� �������. \n";
	system("pause");
	return 0;
}
void MyFunction(int (**Matrix),int size, int &sum)
{
	int count = 0;
	cout << "\n ���������� ���������� ������� � ������� MyFunction(). \n\n";
	cout << " ������, �� ���������� ������������� ���������: \n\n\t";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (*(*(Matrix + i) + j) >= 0)
				count++;
		}
		if (count == size)
		{
			for (int j = 0; j < size; j++)
			{
				sum += *(*(Matrix + i) + j);
				cout << *(*(Matrix + i) + j) << "   ";
			}
			cout << "\n\n\t";
		}
		count = 0;
	}
	cout << "\n";
}