#include <stdio.h>
int main()
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float 형 변수의 값: %.20f\n", ft);
	printf("double 형 변수의 값: %.20lf\n", db);

	return 0;
}