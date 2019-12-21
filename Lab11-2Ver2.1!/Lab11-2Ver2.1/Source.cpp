#include <iostream>
#include <ctime>
#include <locale>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a[100], b[100], k, N, n1 = 0, n2 = 0, n3 = 0;
	void *ptrA, *ptrB;
	cout << "  N=";
	cin >> N;
	srand((unsigned)time(NULL));
	for (k = 0; k<N; k++)
	{
		a[k] = rand() % 50;
		cout << "\n A[" << k + 1 << "]="<< a[k] << endl;
	}
	for (k = 0; k<N; k++)
	{
		b[k] = rand() % 50;
		cout << "\n B[" << k + 1 << "]=" << b[k] << endl;
	}
	for (k = 0; k<N; k++)
	{
		ptrA = &a[k];
		ptrB = &b[k];
		if (*(int*)ptrA == *(int *)ptrB)
			n1++;
		if (*(int*)ptrA > *(int *)ptrB)
			n2++;
		if (*(int *)ptrA < *(int *)ptrB)
			n3++;
	}
	cout << "  A[k] = B[k]:" << n1 << " случай" << endl;
	cout << "  A[k] > B[k]:" << n2 << " случай" << endl;
	cout << "  A[k] < B[k]:" << n3 << " случай" << endl;
	system("pause");
}