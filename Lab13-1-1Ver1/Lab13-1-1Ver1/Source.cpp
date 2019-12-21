/*#include <iostream>
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
	for (int j = 0; j < n; j++)
		if (max < A[j][j])
			{
		max = A[j][j];
		colum = j;
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
	cout << "Максимальный элемент A[" << colum -1 << "," << row -1<< "] =" << max << endl;
}*/
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int i, j, n;
	int **mas = NULL;
	cout << "Vvedite razmernost matrizy n = ";
	cin >> n;
	cout << "\nMatriza razmerom " << n << "x" << n << "\n\n";
	mas = new int*[n];
	for (i = 0; i < n; ++i)
	{
		mas[i] = new int[n];
		for (j = 0; j < n; ++j)
		{
			mas[i][j] = rand() % 25; 
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	int max = mas[0][0];
	int x = 0;
	for (i = 0; i < n; ++i)
	{
		if (max < mas[i][i])
		{
			max = mas[i][i];
			x = i;
		}

	}

	cout << "\nMaksimalnyi element glavnoi diagonali max = " << max << "\n";
	cout << "Nomer stroki x = " << x << "\n";
	for (j = 0; j < n; ++j)
	{
		cout << mas[x][j] << " ";
	}
	cout << "\n";

	return 0;
}