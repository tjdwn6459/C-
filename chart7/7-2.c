#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_num(void); //함수선언

int main(void)
{
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);




	return 0; //출력이 일어났으면 마지막에 return 넣어야한다
}
int get_num(void)
{
	int num;

	printf("양수입력 : ");
	scanf("%d", &num); //정수를 입력 받음 그런 형태의 함수 "get_num"

	return num;//int num으로 출력값을 내준다 
}