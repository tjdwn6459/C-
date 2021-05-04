#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5]; // 각각 int 값 4byte score[0] ~ score[4] 4byte값이 5개라 20칸
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);// 배열안의  개수중에 하나 20/4 = 5개

	for (i = 0; i < count; i++)
	{
		scanf("%d", &score[i]); 
	}
	for (i = 0; i < count; i++)
	{
		total += score[i]; //반복문을 통하여 전체 값을 더한다 ->total 
	}
	avg = total / (double)count; //전체값을 개수만큼 나눈다

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]); // 5칸안에 score[i]의 값이 들어가야 한다
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;



}