#include<stdio.h>

int main()
{
	int a = 1;
	int i;

	for (i = 0; i < 3; i++) //1) i는 0으로 초기화 된후 2)3보다 작은 동안 반복문 실행, 3)i 는 하나씩 증가 
	{
		a = a * 2; 
	}
	printf("a : %d\n", a);


	return 0;
}