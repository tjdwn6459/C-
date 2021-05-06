#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





int main(void)
{
	int person[5][4] = { 0 };
	int total, sub_total;
	double avg;
	int i, j;


	for (i = 0; i < 2; i++) //나중에 5 
	{
		printf("4과목의 점수 입력 :  ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &person[i][j]); // 학생들의 점수를 입력 받는다
		}
	}


	print_score();
	for (i = 0; i < 5; i++) //학생 수 만큼 반복
	{
		total = 0; //인당 총점  저장위해 점수 초기화
		printf("%d 번 학생 : ", i + 1);
		for (j = 0; j < 4; j++) //과목
		{
			printf("%d ", person[i][j]);
			
			total += person[i][j];//과목 반복하면서 점수 더해진다
			

		}
		avg = total / 4.0; //총점을 과목 수만큼 나눠 평균을 낸다
		printf("4과목의 총점 : %d, 평균 : %.1lf \n", total, avg);
	}



	for (j = 0; j < 5; j++)
	{
		sub_total = 0;
		
			 //과목별 총점 저장위해 초기화
			
		for (i = 0; i < 4; i++)
		{
			
			
			sub_total += person[i][j];
			
		}
		printf("합계 : %5d", sub_total);
		avg = (double)sub_total / 5.0;
		printf("평균 :  %.1f\n", avg);
	}


	return 0;
}

//5명의 학생에게 국 영 수 체 점수(과목 4개)를 입력 받는다
//한학생당 점수를 반복해서 더함
//점수를 합산 //평균을 낸다 // 과목별로 값을 반복해서 더한다 