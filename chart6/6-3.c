#include <stdio.h>

int main()
{
	int a = 1; //���� a��ũ��� 4����Ʈ

	do //������ do�� �ִ°� ����
	{
		a = a * 2; 
	} while (a < 10); //1)while���� ���ǹ��� ���̸� ����2) �ƴϸ� �ݺ��� ��������
	printf("a : %d\n", a);


	return 0;
}