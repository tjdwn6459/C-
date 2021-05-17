#include <stdio.h>

//증감연산자의 연산
int main()
{
	int a = 10; 
	int b = 20;
	int c = 10, d = 20;

	++a; /*증감연산자가 앞에 있으면 변수 먼저 증가시키고 대입*/
	--b;
	c++; /*대입하는 연산이 없으면 자체적으로 연산이 이루어진다*/
	d--;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c:%d\t%d\n", c, d);


	return 0;
}