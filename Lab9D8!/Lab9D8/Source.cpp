#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	setlocale(0, "");
	int n, k;
	double area;
	cout << "������� ������ ������� A[2n+1] (������ ����������� ���������� �������)" << endl;
	cin >> n;
	cout << "������� ������������ �������� ��������" << endl;
	cin >> k;
	int *a = new int[2 * n + 1];
	int var;
	if (k<2 * n)
	{
		cout << "�������" << endl;
		system("Pause");
		exit(1);
	}
	srand(time(0));
	for (int i = 0; i < (2 * n + 1); i++)
	{
		var = rand() % (k + 1);
		for (int j = 0; j < i; j++)
			if (a[j] == var)
			{
			i -= 1;
			goto next;
			}
		a[i] = var;
		cout << i << ") ������� = " << a[i] << endl;
	next:
		continue;
	}
	for (int i = 0; i < (2 * n + 1); i++)
	{
		int smaller = 0, bigger = 0;
		for (int j = 0; j < 2 * n + 1; j++)
		{
			if (a[j] > a[i])
				smaller++;
			if (a[j]<a[i])
				bigger++;
		}
		if (smaller == bigger) {
			cout << endl << endl << "C������ �� �������� ������� " << i << ") � = " << a[i] << endl;
			break;
		}
	}
	system("Pause");
}