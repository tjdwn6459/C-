#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size); //방의 개수가 5인 배열을 전달 
	printf("배열의 최댓값 : %.1lf\n", max); //max의 값 출력


	return 0; //프로그램 종료
}

void input_ary(double* pa, int size)//double형태의 배열을 입력 받다 
{
	int i; //제어변수 선언

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i); //n번째 방에 들어 갈 값들을 넣는다 
	}
}


double find_max(double* pa, int size)
{
	double max; //변수선언
	int i;//제어 변수 선언

	max = pa[0]; //배열 첫번째 데이터 값에 있는 변수를 max에 집어넣어라
	for (i = 1; i < size; i++) // 두번째 배열부터 max와 비교한다 
	{
		if (pa[i] > max) max = pa[i];//첫번째의 값을 max로 정했기때문에 다음꺼랑 비교했을 때의 그 값이 크면 max에 넣고 for문 실행하며 최댓값 찾는다 
	}

	return max;
}
