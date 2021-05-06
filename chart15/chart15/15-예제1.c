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
	printf("두 정수를 입력하세요 :  ");
	scanf("%d%d", &a, &b);
	printf("연산기호를 입력하세요 : ");
	scanf(" %c", &ch);
	res = fp(a, b);
	printf("결과값은 : %d\n", res);


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