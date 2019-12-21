#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, *mas, i;
	void *ptr1, *ptr2;
	cout << "Vvedite n" << endl;
	cin >> n;
	mas = new int[n];
	for (int i = 0; i<n; ++i)
		cin >> mas[i];
	sort(mas, mas + n);
	cout << endl;
	for (i = 0; i < n; ++i)
	{
		ptr1 = &mas[i];
		if (*(int*)ptr1 != i + 1)
		{
			cout << *(int*)ptr1 -1<< endl;	
			break;
		}
	}
	system("pause");
	return 0;
}