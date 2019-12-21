#include <ctime>             
#include <stdlib.h>
#include <iostream>
using namespace std;
int* sortBuble(int m[], int lm)
{
	int buf;
	for (int i = 0; i < lm; i++)
		for (int j = 0; j < lm - i - 1; j++)
			if (m[j] > m[j + 1])
			{
		buf = m[j];
		m[j] = m[j + 1];
		m[j + 1] = buf;
			}
	return m;
}
//------------------------------
int* sortShell(int m[], int lm)
{
	int buf;
	bool sort;
	for (int g = lm / 2; g > 0; g /= 2)
		do
		{
		sort = false;
		for (int i = 0, j = g; j < lm; i++, j++)
			if (m[i] > m[j])
			{
			sort = true;
			buf = m[i];
			m[i] = m[j];
			m[j] = buf;
			}
		} while (sort);
	return m;
}
//------------------------------
int getRandKey(int reg = 0)     // генерация случайных ключей
{
	if (reg > 0)
		srand((unsigned)time(NULL));
	int rmin = 0;
	int rmax = 100000;
	return (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
}
//------------------------------
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 50000;
	int k[N], f[N];
	clock_t  t1, t2;
	getRandKey(1);
	for (int i = 0; i < N; i++)
		f[i] = getRandKey(0);
	for (int n = 10000; n <= N; n += 10000)
	{
		cout << "n = " << n << endl;
		cout << "SortPuzirek ";
		memcpy(k, f, n*sizeof(int));
		t1 = clock();
		sortBuble(k, n);
		t2 = clock();
		cout << "Прошло " << t2 - t1 << " тактов времени" << endl;
		cout << "SortShell   ";
		memcpy(k, f, n * sizeof(int));
		t1 = clock();
		sortShell(k, n);
		t2 = clock();
		cout << "Прошло " << t2 - t1 << " тактов времени" << endl << endl;
	}
	return 0;
}
