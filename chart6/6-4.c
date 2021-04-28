#include <stdio.h>

int main()
{
	int i, j; //반복을 위한 제어 변수 선언

	for (i = 0; i < 3; i++) //for문이 만족하니까 
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}