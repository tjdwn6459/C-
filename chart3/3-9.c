#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("정수하나를 입력하세요 : $");
	scanf_s("%d", &a);
	printf("입력된값 : %d\n", a);

	return 0;
}