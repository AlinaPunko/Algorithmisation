/*2.	 Написать функцию с переменным числом параметров, которая находит минимальное
значение матрицы. С ее помощью найти минимальные значения в n матрицах.*/
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
		cout << " Минимальный элемент " << i + 1 << " матрицы: " << *(MinArray + i) << ". \n";
	cout << " Проверка правильности работы функции с переменным число параметров. \n\n";
	cout << " Если после этой записи число не истинно, \nзначит вы используете функцию в первый раз.. \n\n";
	cout << "___________________________________________________________________\n\n";
	cout << " Переданное в функцию число: " << *(ptr + 2) << "\n";
	cout << "___________________________________________________________________\n\n";
	cout << "___________________________________________________________________\n\n";
	cout << " Если после этой записи символ не истинен, \nзначит вы используете функцию в первый раз.. \n\n";
	cout << "___________________________________________________________________\n\n";
	cout << " Переданный в функцию символ: " << (char*)(ptr + 3) << "\n\n";
	return *MinArray;
}
int main()
{
	setlocale(0, "");
	int **Matrix, *MinArray, ***DDDMatrix;
	int size, OT, DO;
	int min;
	int k, n;
	cout << " Введите порядок матрицы: "; cin >> size;
	Matrix = new int*[size];
	for (int i = 0; i < size; i++)
		*(Matrix + i) = new int[size];
	cout << " Выберите вариант выполнения программы \n 1-Ввод данных с клавиатуры\n 2-генерация случайных чисел.\n\n";
	cin >> k;
	if (k == 1)
	{
		cout << "\n Вводите данные: \n";
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << " Введите элемент Matrix[" << i + 1 << "][" << j + 1 << "]: "; cin >> *(*(Matrix + i) + j);
			}
		}
		cout << "\n\n Ваша матрица: \n\n";
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
		cout << " Введите промежуток, которому принадлежат элементы матрицы: \n\n";
		cout << " От: "; cin >> OT;
		cout << " До: "; cin >> DO;

		srand(time(NULL));
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				*(*(Matrix + i) + j) = rand() % (DO - OT + 1) + OT;

		cout << " Ваша матрица: \n\n";
		for (int i = 0; i < size; i++)
		{
			cout << "\t";
			for (int j = 0; j < size; j++)
				cout << *(*(Matrix + i) + j) << "  ";
			cout << "\n\n";
		}
	}
	MIN((int**)Matrix, size, min);
	cout << " Минимальный элемент матрицы: " << min << "\n\n";
	for (int i = 0; i < size; i++)
		delete[] * (Matrix + i);
	delete[]Matrix;
	cout << " Программа выполнена для одной матрицы.\n Сейчас выполнится программа для n матриц. \n\n";
	cout << " Введите количество n матриц: "; cin >> n;
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
		cout << " Вводите элементы для матрицы номер " << i << ": \n";
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				cout << "\t Введите элемент[" << j << "][" << k << "]: ";
				cin >> *(*(*(DDDMatrix + i) + j) + k);
			}
		}
	}
	cout << " Ваши " << n << " матрицы: \n\n";
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


