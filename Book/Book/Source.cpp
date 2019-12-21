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
			cout << "Владелец: ";
			cin >> buf.owner;
			cout << "Цвет: ";
			cin >> buf.color;
			cout << "Марка: ";
			cin >> buf.mark;                               /*создаём функцию для ввода информации из файла*/
			cout << "Тип кузова: ";
			cin >> buf.kuzov;
			cout << "Номер: ";
			cin >> buf.number;
			cout << "Год последнего техосмотра: ";
			cin >> buf.osmotr;
			cout << "Год выпуска: ";
			cin >> buf.vypusk;
			fwrite(&buf, sizeof(buf), 1, f);
		}
		fclose(f);
	}
	else {
		cout << "Ошибка открытия файла";
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
		fclose(f);                                  /*создаём функцию для вывода информации из файла*/
	}
	else {
		cout << "Ошибка открытия файла";
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
			if (strcmp(lastName, buf.owner) == 0)   //сравнение строк
			{
				cout << buf.owner << endl; cout << buf.color << endl; cout << buf.mark << endl; cout << buf.kuzov << endl; cout << buf.number << endl; cout << buf.osmotr << endl; cout << buf.vypusk << endl;
				flag = true; break;
			}
		}
		fclose(f);
		if (!flag)
			cout << "Ничего не найдено\n";                   /*создаём функцию для поиска по фамилии*/
	}
	else
	{
		cout << "Ошибка открытия файла";
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
		cout << "\n1.Ввод данных с клавиатуры и запись в файл\n";
		cout << "2.Вывод данных из файла\n";
		cout << "3.Поиск по фамилии\n";
		cout << "0.Выход из программы\n\n";
		cout << "Введите номер операции: ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Введите количество машин: ";
			cin >> number;
			input(number);  break;
		case 2: output(); break;                         /* создаём функцию-меню*/
		case 3:
		{
			cout << "Введите фамилию владельца: ";
			cin >> owner;
			find(owner); break;
		}
		case 0: exit(0);  break;
		}
	} while (choice != 0);
}


