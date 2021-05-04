#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy 함수를 사용하기 위해

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2; //포인트 2에는 str2문자열 넣다

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2); /*str2에있는 문자열(원본)을  str2로 복사*/
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana"); //문자 포인트 배열 모두 올 수 있다
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
}