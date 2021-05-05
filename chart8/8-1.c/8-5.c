#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //문자열 관련함수 모아놓은 헤더 파일

int main(void)
{
	char str1[80] = "cat"; //문자열 초기화
	char str2[80];

	strcpy(str1, "tiger"); //strcpy(str1, str2) ->두번째 인수를 첫번째 복사해 저장
	strcpy(str2, str1); //위에서 tiger저장되었으니 똑같이 str2에 복사해 저장
	printf("%s, %s\n", str1, str2);



	return 0;
}