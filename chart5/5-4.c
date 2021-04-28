#include <stdio.h>

int main()
{
	int a = 20, b = 10;

	if (a > 10) //a가 10보다 크면 밑으로 실행 작으면 출력
	{
		if (b >= 0)
		{
			b = 1;  //b의 실행문
		}
		else
		{
			b = -1;
		}

	}
	printf(" a : %d, b : %d\n ", a, b);




	return 0;
}