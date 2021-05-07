#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i ,sum= 0;
	

	pi = (int*)malloc(5 * sizeof(int)); //int형 사이즈로 5개를 할당 받음
	if (pi == NULL)
	{

		printf("메모리가 부족합니다\n"); //할당을 못 받음
		exit(1);//error가 나서 강제종료
	}

	printf("다섯 명의 나이를 입력하세요.");
	for (i = 0; i < 5; i++)
	{

		scanf("%d", &pi[i]); //배열 요소에 입력
		sum += pi[i]; //값을 집어넣고 연속적인 값을 계산할때는 초기화 시켜줘야한다(쓰레기 값이 들어갈 수도 있음)
	}

	printf(" 다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
	free(pi);

	

	return 0;
}