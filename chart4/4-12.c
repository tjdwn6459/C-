#include <stdio.h>

//조건 연산자
int main()
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; //삼항연산자 (a>b)의값이 참이면 a 거짓이면 b 거짓이므로 b를 res대입해  출력한다
	printf("큰 값: %d\n", res);


	return 0;
}