#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5]; // ���� int �� 4byte score[0] ~ score[4] 4byte���� 5���� 20ĭ
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);// �迭����  �����߿� �ϳ� 20/4 = 5��

	for (i = 0; i < count; i++)
	{
		scanf("%d", &score[i]); 
	}
	for (i = 0; i < count; i++)
	{
		total += score[i]; //�ݺ����� ���Ͽ� ��ü ���� ���Ѵ� ->total 
	}
	avg = total / (double)count; //��ü���� ������ŭ ������

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]); // 5ĭ�ȿ� score[i]�� ���� ���� �Ѵ�
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;



}