#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[3][4]; //3�� 4��
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++) //���� ���� i�� 0�϶� , j�� 4�� �ݺ��Ǹ鼭 ���� ���Ѵ�
	{

		printf("4������ ���� �Է�: ");
		for (j = 0; j < 4; j++) //���� ����
		{
			scanf("%d", &score[i][j]); //�࿡ ���� ���� �Է��ϴ� ���� ���� �ȴ�
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j]; //�࿡ ���� �ݺ��ϸ鼭 ���� ���� �ش� total
		}
		avg = total / 4.0;
		printf("���� : %d, ��� : %.2lf\n", total, avg);
	}

	return 0;


}