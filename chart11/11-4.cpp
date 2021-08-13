#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch; //값을 입력받는 변수 
	int i; //반복문 제어 변수

	for (i = 0; i < 5; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}


	return 0;
}