#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int N;
	int i, j, f;
	cout << "N=";
	cin >> N;
	int *A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];

	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		f = 1;
		for (j = 0; j < N; j++)
			if (A[i] == A[j] && i != j)
			{
			f = 0;
			break;
			}
		if (f == 1)
			cout << A[i] << endl;
	}
	return 0;
}

