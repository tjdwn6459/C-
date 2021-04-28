#include <stdio.h>

int main()
{

	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b  = %d\n", a, b);
	printf("a/ b의 결과 : %.1lf\n", res);

	a = (int)res; /*형변환은 대입의 오른쪽 연산자만 시킬 수 있다*/
	printf("(int) %.1lf의 결과 : %d\n", res, a);


	return 0;
}