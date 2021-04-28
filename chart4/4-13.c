#include <stdio.h>
int main()
{
	int a = 10; // int는 4byte가 8인 32byte
	int b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b); //배타적 논리합 a와 b가 같으면 거짓 값이 다르면 참이 되는 형태
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);


	return 0;
}