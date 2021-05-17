#include <stdio.h>
#define SUM(a, b) (a + b)
#define MUL(a, b) ((a) * (b))
//매크로 함수를 사용할때는 각각 인수에 괄호를 쳐야 정확한 값을 나타낸다

int main(void)
{

	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("res : %d\n", res);

	return 0;

}