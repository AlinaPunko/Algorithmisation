#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian")
		int x;
	puts(" ��� ����?( 1- �����, 2 - ������ )")
		cin >> x;
	switch (x)
	{
	case 1: {puts("��� ���������? ( 1 - �������� � �����, 2- �������� �� ������, 3- �������� � ������ ����� ) ");
		cin >> x;
		switch (x)
		{
		case 1: puts("����� � ���� ����, ����� � ���� ����������!"); break;
		case 2: puts("���� ���� �������� ������, �������� �����, ������� � ���!"); break;
		case 3: puts("��� ���� ������ �����, ��� �� ����� ����, ����� ������ ���� ���������!"); break;

		}
		break;
	}
	case 2: puts("�������, ��� �������!"); break;
	default: puts("������");
	}
	return 0;
	system("pause");

