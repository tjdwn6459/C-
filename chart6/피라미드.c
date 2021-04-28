#include <stdio.h>

int main()
{
	int i, j, h; //제어 변수 선언
	for (i = 5; i > 0; i--)
	{
		for (j = i; j < 5 ; j++) //1)i가0일때 (j=0) 2) j <5를 만족하니까 3)빈칸을 출력 4)j++해서 i=1로 for문을 5번 돈다
		{
			printf(" ");
		}
	
		for (h = 0; h <(i*2 + 1); h++)//5) *의 개수만큼 찍는 FOR문 실행
		{
			printf("*");
		}
		printf("\n"); //6) 개행을 프린트 7)다시 for (i = 0; i < 6; i++)문 실행
	}
	


	return 0;
}

//i 0 1 2 3 4 5
//x 5 4 3 2 1 0
//y 1 3 5 7 9 11