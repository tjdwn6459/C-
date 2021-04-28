#include <stdio.h>

int main()
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a >10) && (a < 20) : %d\n", res); /*두항이 모두 같으면 참*/

	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20): %d\n", res); /*두항중 하나라도 같으면 참*/

	res = !(a >= 30);
	printf("!(a >= 30) : %d\n", res); /*!(거짓이면) 참*/ 


	return 0;
}