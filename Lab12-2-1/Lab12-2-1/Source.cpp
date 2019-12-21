#include<iostream>
#include<stdio.h>
using namespace std;
void main()
{
	int i = 0, max, min, space = 1, imax = 1, imin = 1;
	char arr[200];
	cout << "vvedite predlogenie" << endl;
	gets_s(arr);
	cout << endl;
	for (int i = 0; i < strlen(arr); i++)
		cout << arr[i];
	cout << endl << "strlen = " << strlen(arr) << endl;
	for (int i = 0; i < strlen(arr) && arr[i] != ' '; i++)
		i++;
	max = min = i;
	imax = imin = 1;
	for (int i = 0; i < strlen(arr); i++, imin++, imax++)
	{
		if (arr[i] == ' ' || arr[i] == ',' || arr[i] == '.')
			imax = imin = 0;
		if (min > imin && imin != 0)
			min = imin;
		if (max < imax)
			max = imax;
	}
	cout << endl << "MAX bukv = " << max << endl;
	cout << "MIN bukv = " << min << endl;
	imax = 0;
	for (i = 0; i < strlen(arr); i++, imax++)
	{
		if (arr[i] == ' ')
		{
			if (imax == max)
			{
				cout << "samoe dlinnoe slovo - ";
				for (int w = i - max; w <= i; w++)
					cout << arr[w];
				cout << endl;
			}
			if (imax == min)
			{
				cout << "samoe korotkoe slovo - ";
				for (int w = i - min; w <= i; w++)
					cout << arr[w];
				cout << endl;
			}
			imax = -1;
		}
	}
}