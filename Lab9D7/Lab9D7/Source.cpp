#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float s = 0;
	int a[100], i, N;
	cout << "  N=";
	cin >> N;
	for (i = 0; i<N; i++)
	{
		cout << "\n a[" << i+1 << "]=";
		cin >> a[i];
		s += (float)a[i] / N;
	}
	cout << "\n ������� ��������������= " << s;
	cout << "\n > �������� ��������������� - ";
	for (i = 0; i<N; i++) 
		if (a[i]>s) 
			cout << a[i] << " ";
	cout << "\n < �������� ��������������� ";
	for (i = 0; i<N; i++) 
		if (a[i]<s)
			cout << a[i] << " ";
	system("pause");
}