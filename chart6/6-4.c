#include <stdio.h>

int main()
{
	int i, j; //�ݺ��� ���� ���� ���� ����

	for (i = 0; i < 3; i++) //for���� �����ϴϱ� 
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}