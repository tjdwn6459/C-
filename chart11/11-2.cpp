#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char c1, c2; //변수 선언 

	scanf_s("%c%c", &c1, &c2); //2개 문자 연속으로 입력(공백, 탭, 개핸문자로 입력)


	printf("[%c%c]", c1, c2); //입력된 문자를 출력


	return 0;
}