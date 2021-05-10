#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[80];//임시 CHAR배열 넉넉하게 선언
	char* str[3]; //동적할당을 연결할 포인터 배열
	int i;

	for (i = 0; i < 3; i++)
	{

		printf("문자열을 입력하세요 : ");
		gets(temp); 
		//문자열을 담을temp라는 공간에  문자열을 입력하고 있다
		str[i] = (char*)malloc(strlen(temp) + 1);//*str포인터에 저장*
		strcpy(str[i], temp);//동적할당영역에 문자열을 복사
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]); //	불러올때 str[i]에 저장된 주솟값에 해당 데이터를 하나만 가져와도 전체 문자열을 가지고 올 수 있다
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]); //메모리 동적할당 받은것 3개 
	}


	return  0;
}