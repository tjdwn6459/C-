#include <stdio.h>

int main()
{

	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res);

	res = ++a * 3;
	printf("res = %d\n", res);

	res = a > b && a != 5; 
	printf("res = %d\n", res);  /*두개의 항이 모두 참일시 res가 1을 입력받아 출력*/

	res = a % 3 == 0;
	printf("res = %d\n", res);


	return 0;
}