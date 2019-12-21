/*1. Дана целочисленная квадратная матрица. Определить сумму элементов в тех строках, которые не содержат отрицательных элементов.*/
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
	cout << "\t\t\tЗадание №1\n\n\n";
	cout << "################################################################################\n";
	cout << " Введите размер квадратной матрицы: "; cin >> size;
	Matrix = new int*[size];
	for (int i = 0; i < size; i++)
	{
		*(Matrix + i) = new int[size];
		if (*(Matrix + i) == NULL)
		{
			cout << " Не удалось выделить память. \n\n";
			system("pause");
			return 0;
		}
	}
	cout << " Память для матрицы выделена. \n\n";
	cout << "################################################################################\n";
	cout << " Вводите элементы матрицы: \n\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << " Введите элемент матрицы Matrix[" << i + 1 << "][" << j + 1 << "]: "; cin >> *(*(Matrix + i) + j);
		}
	}
	cout << "################################################################################\n";
	cout << "\n\n\n Ваша матрица: \n\n";
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
	cout << " Управление программой вернулось к функции main()\n\n";
	cout << " Сумма элементов в строках с полож. элементами: " << sum << "\n\n";
	for (int i = 0; i < size; i++)
		delete[] * (Matrix + i);
	delete[]Matrix;
	cout << "################################################################################\n";
	cout << " Очистка память выполнена успешно. \n";
	system("pause");
	return 0;
}
void MyFunction(int (**Matrix),int size, int &sum)
{
	int count = 0;
	cout << "\n Управление программой перешло к функции MyFunction(). \n\n";
	cout << " Строки, не содержащие отрицательных элементов: \n\n\t";
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