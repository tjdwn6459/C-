#include <stdio.h>
int main()
{
	int a = 10; // int�� 4byte�� 8�� 32byte
	int b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b); //��Ÿ�� ���� a�� b�� ������ ���� ���� �ٸ��� ���� �Ǵ� ����
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);


	return 0;
}