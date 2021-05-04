#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");

	if (strcmp(str1, str2) > 0) //str1과 str2를 비교 한다(str1이 str2보다 사전에 나중에 나오면 1 반환)
		printf("%s\n", str1); //str1이 str2보다 사전에 먼저 나오면 -1반환 
	else
		printf("%s\n", str2);

	return 0;


}