#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int i, j, row = 0, colum = 0, n, max;
	int A[100][100];
	cout << "Введите размерность массива" << endl;
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			A[i][j] = rand() % 30;
	max = A[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if ( max > A[i][j])
			{
		max = A[i][j];
		colum = i;
		row = j;
			}
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "A[" << i << "," << j << "] =" << A[i][j] << "\t";
	}
	cout << endl;
	cout << "Максимальный элемент A[" << colum << "," << row << "] =" << max << endl;
}
