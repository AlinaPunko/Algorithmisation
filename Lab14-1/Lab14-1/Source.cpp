#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int  n, k;
	cout << "Введите n= ";
	cin >> n;
	int *A = new int[n];
	srand(time(0));
	for (int k = 0; k < n; k++)
	{
		A[k] = rand()%5;
		cout << A[k] << " ";
	}
	cout << endl;
	cout << "Элементы, равные нулю " << endl;
	for (k = 0; k < n; k++)
	{
		if (A[k] == 0)
			cout << "A[" << k << "]=" << A[k] << endl;
	}
	cout << endl;
	cout << "Наименьший индекс нулевого элемента "<< endl;
	for ( k = 0; k < n; k++)
	{
		if (A[k] == 0)
		{
			cout << k;
			break;
		}
	}
	cout << endl;
	return 0;
}

