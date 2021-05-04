#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[3][4]; //3행 4열
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++) //행을 제어 i가 0일때 , j가 4번 반복되면서 값을 정한다
	{

		printf("4과목의 점수 입력: ");
		for (j = 0; j < 4; j++) //열을 제어
		{
			scanf("%d", &score[i][j]); //행에 따른 열에 입력하는 값이 들어가게 된다
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j]; //행에 열을 반복하면서 값을 더해 준다 total
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}

	return 0;


}