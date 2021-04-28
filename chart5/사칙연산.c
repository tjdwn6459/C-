#include <stdio.h>

int main()
{
	int a = 10;
	int b = 5;
	int res;
	double apple;

	res = a + b;
	printf("a + b : %d\n", res);
	res = a - b;
	printf("a - b : %d\n", res);
	res = a * b;
	printf("a * b : %d\n", res);
	apple =a / b;
	printf("a / b : %.1lf\n", apple);



	return 0;
}