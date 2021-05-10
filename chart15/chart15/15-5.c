#include <stdio.h>

int main(void)
{
	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int(*pa)[4];// int 형 변수 4개의 배열을 가리키고 있는 배열 포인터()를 쓴다
	int i, j;

	pa = ary;//배열포인터에 ary를 저장
	for (i = 0; i < 3; i++)//배열이 2차원이라 이중for문 사용
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]); //pa[i][j]각자의 방에 해당하는 값을 출력한다 
		}
		printf("\n");
	}
	return 0;
}