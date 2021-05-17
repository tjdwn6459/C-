#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//scanf를 사용한 연속 입력
int main()
{
	int age; //나이는 정수형
	double height; //키는 실수형의 변수

	printf("나이와 키를 입력하세요 : "); 
	scanf_s("%d%lf", &age, &height); //입력하는 값의 주솟값 저장
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height); //해당변수의 주솟값을 찾아 값을 출력
	return 0;
}