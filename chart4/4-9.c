#include<stdio.h>

int main() {

	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof (a)); /*sizeof는 연산자라 괄호 없어도 값이 나온다*/
	printf("double형 변수의 크기 : %d\n", sizeof (b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결과값의 크기 : %d\n", sizeof (1.5 + 3.4)); /*이런경우를 대비해 괄호가 필요 하다(결과값 이상)*/
	printf("char 자료형의 크기 : %d\n", sizeof(char));


	return 0;
}