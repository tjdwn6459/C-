#include <stdio.h>
int main()
{
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a 의 값 : %d\n", a);
	printf("변수 b 의 값 : %d\n", b);
	printf("변수 c 의 값 : %d\n", c);
	printf("변수 da 의 값 : %.1lf\n", da);
	printf("변수 ch 의 값 : %c\n", ch);

	printf("char 크기: %d\n", sizeof(char));
	printf("int 크기 : %d\n", sizeof(int));
	printf("double 크기 : %d\n", sizeof(double));
	
	return 0;
}