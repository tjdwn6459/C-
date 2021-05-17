#include <stdio.h>

//복합대입 연산자
int main()
{
	int a = 10, b = 20;
	int res = 2;

	a += 20; //오른쪽의 숫자에 a의 저장된값을 더해서 저장 
	res *= b + 10; //왼쪽의 연산에 오른쪽 값을 곱해서 저장


	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);


	return 0;
}