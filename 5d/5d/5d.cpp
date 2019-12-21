#include <iostream>
#include <fstream>
using namespace std;
struct Adr
{
	char name[30];
	char street[40];
	char city[20];
	struct Adr *next;
	struct Adr *prev;
};
struct Adr *head;
struct Adr *last;
int Menu(void)
{
	char s[80];
	int c;
	cout << endl;
	cout << "1. ���� �����" << endl;
	cout << "2. �������� �����" << endl;
	cout << "3. ����� �� �����" << endl;
	cout << "4. �����" << endl;
	cout << "5. ��������� � ����" << endl;
	cout << "6. ��������� �� �����" << endl;
	cout << "7. ������� k ��������x" << endl;
	cout << "8. �������" << endl;
	cout << "9. �����" << endl; cout << endl;
	do
	{
		cout << "��� �����: ";
		gets(s);
		cout << endl;
		c = atoi(s);
	} while (c < 0 || c > 9);
	return c;
}
void Sozdat(Adr *i, Adr **head, Adr **last)
{
	struct Adr *old, *p;
	if (*last == NULL)
	{
		i->next = NULL;
		i->prev = NULL;
		*last = i;
		*head = i;
		return;
	}
	p = *head;
	old = NULL;
	while (p)
	{
		if (strcmp(p->name, i->name) < 0)
		{
			old = p;
			p = p->next;
		}
		else
		{
			if (p->prev)
			{
				p->prev->next = i;
				i->next = p;
				i->prev = p->prev;
				p->prev = i;
				return;
			}
			i->next = p;
			i->prev = NULL;
			p->prev = i;
			*head = i;
			return;
		}
	}
	old->next = i;
	i->next = NULL;
	i->prev = old;
	*last = i;
}
void Vvod(char *prompt, char *s, int count)
{
	char p[255];
	do
	{
		cout << (prompt);
		fgets(p, 254, stdin);
		if (strlen(p) > count)
			cout << ("������� ������� ������");  //����� ������
	} while (strlen(p) > count);
	p[strlen(p) - 1] = 0;
	strcpy(s, p);
}
void VvodSp(void)      // ���� ������
{
	struct Adr *t;
	int i;
	t = new (struct Adr);
	if (!t)
	{
		cout << ("��� ��������� ������");
		return;
	}
	Vvod("������� ���: ", t->name, 30);
	Vvod("������� �����: ", t->street, 40);
	Vvod("������� �����: ", t->city, 20);
	Sozdat(t, &head, &last);
}
void VyvodSp(void)      //����� ������ �� �����
{
	struct Adr *t;
	t = head;
	while (t)
	{
		cout << t->name << ' ' << t->street << ' ' << t->city << endl;
		t = t->next;
		cout << "" << endl;
	}
}
void Poisk(void)    // ����� ����� � ������
{
	char name[40];
	struct Adr *t;
	t = head;
	cout << "������� ���: ";
	gets(name);
	while (t)
	{
		if (!strcmp(name, t->name)) break;
		t = t->next;
	}
	if (!t)
		cout << "��� �� �������" << endl;
	else
		cout << t->name << ' ' << t->street << ' ' << t->city << endl;
}
void Udalit(Adr **head, Adr **last)  // �������� ����� �� ������
{
	struct Adr *t;
	char name[40];
	t = *head;
	cout << "������� ���: ";
	gets(name);
	while (t)
	{
		if (!strcmp(name, t->name)) break;
		t = t->next;
	}
	if (t)
	{
		if (*head == t)
		{
			*head = t->next;
			if (*head)
				(*head)->prev = NULL;
			else   *last = NULL;
		}
		else
		{
			t->prev->next = t->next;
			if (t != *last)
				t->next->prev = t->prev;
			else     *last = t->prev;
		}
		delete t;
	}
}
void Zapisat(void)       //������ � ����
{
	struct Adr *t;
	FILE *fp;
	fp = fopen("mlist", "wb");
	if (!fp)
	{
		cout << "���� �� �����������" << endl;  exit(1);
	}
	cout << "���������� � ����" << endl;
	t = head;
	while (t)
	{
		fwrite(t, sizeof(struct Adr), 1, fp);
		t = t->next;
	}
	fclose(fp);
}
void Schitat()          //���������� �� �����
{
	struct Adr *t;
	FILE *fp;
	fp = fopen("mlist", "rb");
	if (!fp)
	{
		cout << "���� �� �����������" << endl;
		exit(1);
	}
	while (head)
	{
		last = head->next;
		delete head;
		head = last;
	}
	head = last = NULL;
	cout << "�������� �� �����" << endl;
	while (!feof(fp))
	{
		t = new (struct Adr);
		if (!t)
		{
			cout << "��� ��������� ������" << endl;
			return;
		}
		if (1 != fread(t, sizeof(struct Adr), 1, fp)) break;
		Sozdat(t, &head, &last);
	}
	fclose(fp);
}
void DeleteKLast()
{
	int k;
	cout << "C������ ��������� �������?" << endl;
	cin >> k;
	for (int i = 0; i<k; i++)
	{
		//��������� p ������������� �� ������ ������ 
		Adr *p = head;
		//���� � ������ ���� �������
		if (p == last)
		{
			//�� ��� �������
			delete p;
			//��������� last � head ��������
			head = last = NULL;
		}
		//���� � ������ 2 � ����� ���������
		else
		{
			//��������� p ������������� �� ������������� �������
			while (p->next != last) p = p->next;
			//��������� ������� �������
			delete last;
			// ������ ��������� ������� - ��� ���,
			//�� ������� ��������� p
			last = p;
			//� ���������� �������� ���� next �������� NULL
			last->next = NULL;
		}
	}
}
void Delete()
{
	for (int i = 0; i<100; i++)
	{
		//��������� p ������������� �� ������ ������ 
		Adr *p = head;
		//���� � ������ ���� �������
		if (p == last)
		{
			//�� ��� �������
			delete p;
			//��������� last � head ��������
			head = last = NULL;
		}
		//���� � ������ 2 � ����� ���������
		else
		{
			//��������� p ������������� �� ������������� �������
			while (p->next != last) p = p->next;
			//��������� ������� �������
			delete last;
			// ������ ��������� ������� - ��� ���,
			//�� ������� ��������� p
			last = p;
			//� ���������� �������� ���� next �������� NULL
			last->next = NULL;
		}
	}
}
int main(void)
{
	setlocale(LC_CTYPE, "Rus");
	head = last = NULL;
	for (;;)
	{
		switch (Menu())
		{
		case 1: VvodSp();  break;
		case 2: Udalit(&head, &last); break;
		case 3: VyvodSp(); break;
		case 4: Poisk();   break;
		case 5: Zapisat(); break;
		case 6: Schitat(); break;
		case 7: DeleteKLast(); break;
		case 8: Delete(); break;
		case 9: exit(0);
		}
	}
	return 0;
}