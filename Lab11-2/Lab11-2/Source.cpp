#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[100], b[100], k, N, K;
	cout << "  N=";
	cin >> N;
	for (k = 0; k<N; k++)
	{
		cout << "\n A[" << k + 1 << "]=";
		cin >> a[k];
	                            
	}
	for (K = 0; K<N; K++)
	{
		cout << "\n B[" << K + 1 << "]=";
		cin >> b[K];
	}
}