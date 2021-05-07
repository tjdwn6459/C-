#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{

		printf("문자열을 입력하세요 : ");
		gets(temp); 
		//temp라는 변수를 입력하고 있다
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]); //메모리 동적할당 받은것 3개 
	}


	return  0;
}