#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	setlocale(0, "");
	int n, k, F = 0, x2, sum = 0, x1 = 1, i = 0;
	int ARR[3] = { 1, 1, 2 };
	cout << "Введите размер массива " << endl;
	cin >> n;
	cout << "Введите максимальное значение элемента " << endl;
	cin >> k;
	int *mass = new int[n];
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		mass[i] = rand() % (k + 1);
		cout << i << " элемент = " << mass[i] << endl;
	}
	while (F <= k)
	{
		cout << "Число Фибоначчи " << F << endl;
		for (int p = 0; p < n; p++)
			if (mass[p] == F)
				sum++;
		if (F < 2)
		{
			F = ARR[i];
			i++;
		}
		else
		{
			x2 = F;
			F = F + x1;
			x1 = x2;
		}
	}
	if (sum == 0)
		cout << "В массиве нет ни одного элемента со значением, которое равно числу Фибоначчи";
	else
		cout << sum << " - Столько чисел Фибоначчи в массиве" << endl;
	delete[]mass;
	system("Pause");
}