#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	if (a > 0)
	{
		b = 1;        
	}
	else if(a == 0)
	{
		b = 2;  //else if는 또다른 조건문으로 조건문을 달 수 있다
	}
	else
	{

		b = 3; // else 는 조건문을 달 수 없다
	}

	printf("b : %d\n", b);

	return 0;
}