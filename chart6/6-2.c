#include<stdio.h>

int main()
{
	int a = 1;
	int i;

	for (i = 0; i < 3; i++) //1) i�� 0���� �ʱ�ȭ ���� 2)3���� ���� ���� �ݺ��� ����, 3)i �� �ϳ��� ���� 
	{
		a = a * 2; 
	}
	printf("a : %d\n", a);


	return 0;
}