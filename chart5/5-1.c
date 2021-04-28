#include <stdio.h>

int main()
{
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a; /*if문 실행해서 참이면 a의 값을 b에 대입 하고 */
	}

	printf("a : %d, b : %d\n", a, b); /*위의 값을 출력한다*/



	return 0;
}