#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80]; //두 문자열을 입력할 배열
	char* resp; // 문자열이 긴 배열을 선택할 포인터

	printf("2개의 과일 이름 입력 : "); 
	scanf("%s%s", str1, str2);   //2개의 문자열을 입력
	if (strlen(str1) > strlen(str2)) //배열이 입력된 문자열을 비교
		resp = str1; //str1가 더 긴경우 문자열을 입력 받는다 

	else
		resp = str2; //str2문자열을 resp포인터가 가리키는 곳에 데이터 출력
	printf("이름이 긴 과일은 : %s\n", resp);

	return 0;





}