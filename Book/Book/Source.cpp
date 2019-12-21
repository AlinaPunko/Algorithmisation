#include <iostream>
typedef struct Cars
{
	char owner[15];
	char color[16];
	char mark[10];
	char kuzov[10];
	char number[10];
	char osmotr[10];
	char vypusk[10];
} STUD;

int number;
FILE *f;
using namespace std;
errno_t err;

void input(int size)
{
	STUD buf = { ' ', ' ' };
	if (!fopen_s(&f, "base.txt", "ab"))
	{
		for (int p = 0; p < size; p++)
		{
			cout << "��������: ";
			cin >> buf.owner;
			cout << "����: ";
			cin >> buf.color;
			cout << "�����: ";
			cin >> buf.mark;                               /*������ ������� ��� ����� ���������� �� �����*/
			cout << "��� ������: ";
			cin >> buf.kuzov;
			cout << "�����: ";
			cin >> buf.number;
			cout << "��� ���������� ����������: ";
			cin >> buf.osmotr;
			cout << "��� �������: ";
			cin >> buf.vypusk;
			fwrite(&buf, sizeof(buf), 1, f);
		}
		fclose(f);
	}
	else {
		cout << "������ �������� �����";
		return;
	}
}

void output()
{
	STUD buf;
	if (!fopen_s(&f, "base.txt", "rb"))
	{
		fread(&buf, sizeof(buf), 1, f);
		while (!feof(f))
		{
			cout << buf.owner << endl; cout << buf.color << endl; cout << buf.mark << endl; cout << buf.kuzov << endl; cout << buf.number << endl; cout << buf.osmotr << endl; cout << buf.vypusk << endl;
			fread(&buf, sizeof(buf), 1, f);
		}
		cout << endl;
		fclose(f);                                  /*������ ������� ��� ������ ���������� �� �����*/
	}
	else {
		cout << "������ �������� �����";
		return;
	}
}

void find(char lastName[16])
{
	bool flag = false;
	STUD buf;
	if (!fopen_s(&f, "base.txt", "rb"))
	{
		while (!feof(f))
		{
			fread(&buf, sizeof(buf), 1, f);
			if (strcmp(lastName, buf.owner) == 0)   //��������� �����
			{
				cout << buf.owner << endl; cout << buf.color << endl; cout << buf.mark << endl; cout << buf.kuzov << endl; cout << buf.number << endl; cout << buf.osmotr << endl; cout << buf.vypusk << endl;
				flag = true; break;
			}
		}
		fclose(f);
		if (!flag)
			cout << "������ �� �������\n";                   /*������ ������� ��� ������ �� �������*/
	}
	else
	{
		cout << "������ �������� �����";
		return;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice;
	char owner[16];
	do
	{
		cout << "\n1.���� ������ � ���������� � ������ � ����\n";
		cout << "2.����� ������ �� �����\n";
		cout << "3.����� �� �������\n";
		cout << "0.����� �� ���������\n\n";
		cout << "������� ����� ��������: ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "������� ���������� �����: ";
			cin >> number;
			input(number);  break;
		case 2: output(); break;                         /* ������ �������-����*/
		case 3:
		{
			cout << "������� ������� ���������: ";
			cin >> owner;
			find(owner); break;
		}
		case 0: exit(0);  break;
		}
	} while (choice != 0);
}


