#include <iostream>
using namespace std;
void Function(int(**Matrix), int size, int &sum);
int main()
{
	setlocale(0, "");
	int size;
	int **Matrix;
	int sum = 0;
	cout << " ������� ������ ���������� �������: ";
	cin >> size;
	Matrix = new int*[size];
	cout << " ������� �������� �������: \n\n";
	for (int i = 0; i < size; i++)
	{
		Matrix[i] = new int[size];
		for (int j = 0; j < size; j++)
		{
			cout << " ������� ������� ������� Matrix[" << i << "][" << j << "]: ";
			cin >> *(*(Matrix + i) + j);
		}
	}
	cout << "\n\n\n ���� �������: \n\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\t";
		for (int j = 0; j < size; j++)
		{
			cout << *(*(Matrix + i) + j) << "    ";
		}
		cout << endl;
	}
	for (int i = 0; i < size; i++)
	{

		cout << "\n\n";
		Function((int**)Matrix, size, sum);
		cout << " ����� ��������� � ������� � �����. ����������: " << sum << "\n\n";
		system("pause");
		return 0;

	}
}
void Function(int(**Matrix), int size, int &sum)
{
	int count = 0;
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