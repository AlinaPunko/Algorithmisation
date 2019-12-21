#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int N;
	cout << "N=";
	cin >> N;
	int *A = new int[N];
	int S = 0;
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		S += A[i];
	}
	for (int i = 1; i<N; i++)
	{
		if (k = 5)
			break;
		if (A[i] % 2 == 1)
		{
			for (int i = 1; i < N; i++)
			{
				A[i] = A[i+1];
				k++;
			}
		}
	}
	for (int i = N - 4; i < N; i++)
	{
		A[i] =0;
	}
	for (int i = 0; i<N; i++)
		cout << A[i] << ' ';
}

