#include <stdio.h>

int main(void)
{
	int num[3][4] = {  //3행 4열(2차원 배열의 선언과 초기화)
		{1, 2, 3, 4},  //num의 0행
		{5, 6, 7, 8},  //num 의 1행
		{9, 10, 11, 12} //num 의 2행
	};

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);//배열 요소 %5 5칸씩 띄어 숫자 넣어서 출력
		}
		printf("\n");  //한 행을 출력한후 개행
	}

	return 0;




}