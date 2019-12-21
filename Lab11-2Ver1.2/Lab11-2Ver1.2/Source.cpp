#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a[100], b[100], k, N, K, n1=0, n2=0, n3=0;
	void *ptrA, *ptrB;
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
	for (K = 0, k=0; K<N && k<N; K++, k++)
	{
		if (a[k] == b[K])
			n1++;
	}
	for (K = 0, k = 0; K<N && k<N; K++, k++)
	{
		if (a[k] > b[K])
			n2++;
	}
	for (K = 0, k = 0; K<N && k<N; K++, k++)
	{
		if (a[k] < b[K])
			n3++;
	}
	cout << "  A[k] = B[k]:" << n1 << " случай"<< endl;
	cout << "  A[k] > B[k]:" << n2 << " случай" << endl;
	cout << "  A[k] < B[k]:" << n3 << " случай" << endl;
	}




