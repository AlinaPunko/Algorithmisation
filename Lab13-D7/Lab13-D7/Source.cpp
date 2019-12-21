#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	const int N = 3;
	int M[N][N] = { { 1, 2, 2 }, { 1, 5, 5 }, { 7, 8, 9 } }, max = 0, i, j, sum = 0;

	cout << "Матрица:\n";
	for (i = 0; i<N; i++)
	{
		for (j = 0; j<N; j++)
		{

			cout << M[i][j] << "  ";
		}
		cout << "\n";
	}
	M[1][1] = max;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (((j >= i) && ((i + j)) <= (N + 1)) || (j <= i) && ((i + j) >= N + 1))
				if (max < M[i][j]) max = M[i][j]; sum += M[i][j];

		}
	}
	cout << max << endl << sum << endl;
	system("pause");
}