#include <stdio.h>
struct address //�ּҷ� ����� ����ü ����
{

	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp);

int main(void)
{


	struct address list[5] = {//5���� ���������� ������ �迭�� ����
		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
		{"�̼���", 35, "222-2222", "���� ��õ��"},
		{"�庸��", 24, "333-3333", "�ϵ� û����"},
		{"������", 19, "444-4444", "�泲 õ��"},
		{"���߱�", 39, "555-5555", "Ȳ�ص� ����"},
	};

	print_list(list);
	return 0;


}

void print_list(struct address* lp)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			//(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
			lp[i].name, lp[i].age, lp[i].tel, lp[i].addr);
	}
}