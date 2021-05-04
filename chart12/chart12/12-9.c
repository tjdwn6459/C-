#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main(void)
{
	char str[20] = "mango tree"; //배열을  mango tree로 초기화

	strncpy(str, "apple-pie", 5); //5개 자리의 문자열만 복사 "apple"

	printf("%s\n", str); //기존에 있는 5개 문자만 변환이 된다 ->apple tree

	return 0;



}