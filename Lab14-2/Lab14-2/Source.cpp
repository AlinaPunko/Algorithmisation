#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int  **A, k,j, i, size=8;
	srand(time(0));
	A = new int*[size];
	for (i = 0; i < size; i++)
	{
		A[i] = new int[size];
		for (j = 0; j < size; j++)
		{
			cout << "Введите число A[" << i << "]" << "[" << j << "]" << endl;
			cin >> A[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			cout << A[i][j]<< ' ';
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
			cout <<  k << "- ый столбец эквивалентен" << k << "-ой строке" << endl;
	}
	return 0;
}