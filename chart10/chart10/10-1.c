#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10; //�����ּ� 
	*(ary + 1) = *(ary + 0) + 10; // 2��° ��ȿ� *(ary + 1) ���� ���� 20

	printf("�� ��° �迭 ��ҿ� Ű���� �Է�: ");
	scanf("%d", ary + 2); //3��° �� �Է��� ���� 

	for (i = 0; i < 3; i++) //�迭������ for��
	{

		printf("%5d", *(ary + i)); //5ĭ�ȿ� ���迭 ����� �ּҸ� ã�� *(ary + 1)�������� �������� ��� �迭�� ���ary[1] �� ���
	}





	return 0; //���α׷� ����
}