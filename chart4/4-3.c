#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 10, d = 20;

	++a; /*���������ڰ� �տ� ������ ���� ���� ������Ű�� ����*/
	--b;
	c++; /*�����ϴ� ������ ������ ��ü������ ������ �̷������*/
	d--;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c:%d\t%d\n", c, d);


	return 0;
}