#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int(*fp)(int, int));
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main(void)
{
	int sel;

	switch (sel)
	
	{

	case 1: func(sum); break;
	case 2: func(sub); break;
	case 3: func(mul); break;

	}
	return 0;
}

void func(int(*fp)(int, int))
{
	int a, b;
	int res;
	char ch;
	printf("�� ������ �Է��ϼ��� :  ");
	scanf("%d%d", &a, &b);
	printf("�����ȣ�� �Է��ϼ��� : ");
	scanf(" %c", &ch);
	res = fp(a, b);
	printf("������� : %d\n", res);


}

int sum(int a, int b)
{
	return (a + b);

}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}