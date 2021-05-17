#include <stdio.h>
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x,y) (x ## y) //a, y 의 두개의 인수를 전달받고 두개의 인수를 붙인다

int main(void)
{
	int a1, a2;

	NAME_CAT(a, 1) = 10;//(a,1)=(a1)
	NAME_CAT(a, 2) = 20;//(a, 2) = (a2)
	PRINT_EXPR(a1 + a2); // printf(" a1 + a2" " = %d\n", a1 + a2);
	PRINT_EXPR(a2 - a1);//printf("a2 - a1" " = %d\n", a2- a1);

	return 0;


}