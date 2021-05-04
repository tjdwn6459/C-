#include <stdio.h>

int main()
{

	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{

		sum += i;
		if (sum > 30) break; //break는 가장 가까운 반복문만 빠져나온다
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);


	return 0;
}