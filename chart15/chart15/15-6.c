#include <stdio.h>


//2차원 배열의 값을 출력하는 함수
void print_ary(int(*)[4]);

int main(void)
{
	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };//3행 4열의 배열 선언

	print_ary(ary);//배열명을 인수로 주고 함수 호출

	return 0;

}

void print_ary(int(*pa)[4]) //배열포인터 
{
	int i, j;

	for (i = 0; i < 3; i++) // i = 0일때 i < 3이면 밑에 반복문 실행
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}

		printf("\n");
	}

}