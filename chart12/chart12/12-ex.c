#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include<string.h>

int main(void) {
	char ch;

	printf("소문자 입력 : ");
	scanf("%c", &ch);


	if ((ch >= 'a') && (ch <= 'z')) //소문자 범위
	{
		printf("대문자 : %c ", ch - 32); // a=97, A=65 소문자에서 대문자로 바꾸려면 97-32=65 A의 값이 나온다
	}

	else if ((ch >= 'A') && (ch <= 'Z')) //대문자 범위
		
	{
		printf("소문자 : %c ", ch + 32); //대문자에서 소문자가 되려면 차이나는 만큼 더해준다 
	}

	printf("대문자 입력 : ");
	scanf(" %c", &ch);


	if ((ch >= 'a') && (ch <= 'z')) //ch의 범위 설정 
	{
		printf("대문자 : %c ", ch - 32);
	}

	else if ((ch >= 'A') && (ch <= 'Z'))

	{
		printf("소문자 : %c ", ch + 32);
	}


	return 0;
}