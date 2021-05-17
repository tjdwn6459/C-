#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//scanf를 사용한 키보드 입력 
int main()
{
	int a; // int형 변수 a 선언

	printf("정수하나를 입력하세요 : $");
	scanf_s("%d", &a); //&변수의 주소를 구하는 연산자
	printf("입력된값 : %d\n", a);//a의 주솟값을 찾아 출력 

	return 0;
}