#include <stdio.h>

int main(void)
{
	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int(*pa)[4];// int �� ���� 4���� �迭�� ����Ű�� �ִ� �迭 ������()�� ����
	int i, j;

	pa = ary;//�迭�����Ϳ� ary�� ����
	for (i = 0; i < 3; i++)//�迭�� 2�����̶� ����for�� ���
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]); //pa[i][j]������ �濡 �ش��ϴ� ���� ����Ѵ� 
		}
		printf("\n");
	}
	return 0;
}