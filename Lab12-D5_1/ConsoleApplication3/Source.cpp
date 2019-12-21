#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 255;
	char text[N];
	int len, count = 0, k;
	cout << "¬ведите текст\n";
	gets_s(text);
	len = strlen(text);
	for (int i = 0; i < len; i++)
	{
		if (text[i] == ' ' || i == len - 1)
		{
			count++;
			if (count % 2 == 1)
			{
				for (int j = i + 1; j < len; j++)
				{
					if (text[j] == ' ' || j == len - 1)
					{
						for (int k = j - 1; k >= i; k--)
						{
							cout << text[k];
						}
						break;
					}
				}
			}
		}
	}
	system("PAUSE");
}