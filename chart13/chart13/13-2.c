#include <stdio.h>

void assign(void);

int main(void)
{

	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{                       //블록 시작
		int temp;           //temp 변수 선언

		temp = a;
		a = b;     //8행에 선언된 변수
		b = temp;
		              //블록 끝
	}

	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}