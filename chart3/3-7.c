#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> //문자열을 다루는 헤더파일 

//char베열에 문자열 복사
int main(void)
{
	char fruit[20] = "strawberry";//20개의 방을가진 변수에 문자열을 저장

	printf("%s\n", fruit);//문자열 출력
	strcpy(fruit, "banana");//stcpy의 함수를 사용해 문자열을 fruit에 저장
	printf("%s\n", fruit);//저장한 문자열을 출력

	return 0;



}