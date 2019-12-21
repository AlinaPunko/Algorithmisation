#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	setlocale(0, "");
	int mass, n, k, max = 0, week_max = 0, week = 1, sum = 0, d = 1;
	cout << "¬ведите количество дней" << endl;
	cin >> n;
	cout << "¬ведите максимальное количество осадков" << endl;
	cin >> k;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		mass = (rand() % (k + 1));
		cout << "day[" << i + 1 << "] = " << mass << endl;
		sum += mass;
		d++;
		if (d > 7)
		{
			d = 1;
			if (sum > max)
			{
				max = sum;
				week_max = week;
			}
			sum = 0;
			week++;
		}
	}
	cout << "Ќа " << week_max << " неделе выпало максимальное количество осадков =" << max << endl;
	system("Pause");
}


