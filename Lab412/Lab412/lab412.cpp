#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian")
		int x;
	puts(" Как дела?( 1- плохо, 2 - хорошо )")
		cin >> x;
	switch (x)
	{
	case 1: {puts("Что случилось? ( 1 - Проблемы в семье, 2- Проблемы на работе, 3- Проблемы в личной жизни ) ");
		cin >> x;
		switch (x)
		{
		case 1: puts("Семья у тебя одна, стоит с ними помириться!"); break;
		case 2: puts("Есть вещи поважнее работы, например семья, подумай о них!"); break;
		case 3: puts("Это лишь мелкая ссора, она не стоит того, чтобы терять ваши отношения!"); break;

		}
		break;
	}
	case 2: puts("Отлично, так держать!"); break;
	default: puts("Ошибка");
	}
	return 0;
	system("pause");

