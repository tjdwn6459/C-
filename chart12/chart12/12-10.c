#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcat, strncat함수 사용 헤더 파일

int main(void)
{
	char str[80] = "straw"; //straw로 문자열을 초기화

	strcat(str, "berry"); // str 배열에  berry 붙이기
	printf("%s\n", str);
	strncat(str, "piece", 3);//str배열에 piece에서 3개만 pie 붙이기 
	printf("%s\n", str);

	return 0;




}