#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile //profile 구조체 선언
{
	char name[20]; //이름저장 배열
	int age; //나이 저장 배열
	double height; //키
	char* intro;//자기소개를 위한 포인터

};

int main(void)
{
	struct profile yuni;//구조체 객체yuni선언

	strcpy(yuni.name, "서하윤"); //name이라는 구조체에 문자열을 저장
	yuni.age = 17; //yuni라는 객제에 age멤버가 접근해 데이터 넣다
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80); //자기소개를 저장할 공간에 동적 할당 
	printf("자기소개 : ");
	gets(yuni.intro);//공간에 자기소개를 입력

	printf("이름 : %s\n", yuni.name); 
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);//동적할당 free를 통해서 메모리 해제가 가능

	return 0;



}