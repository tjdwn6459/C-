#include <stdio.h>

int main()
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a�� �� : %d,b�ǰ� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", mul);
	printf("���� : %d\n", sub);
	printf("a�� ���� ���� : %d\n", inv);


	return 0;
}