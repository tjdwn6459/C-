#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	char b;

	printf("정수하나를 입력하세요 : $ "); /*문자를 받고 정수를 받을때 공백은 상관이 없다*/
	scanf("%d", &a);
	getchar(); //문자하나를 입력받은뒤 결과를 반환한다 
	printf("문자하나를 입력하세요 : $ ");
	scanf("%c", &b);
	printf("입력된 값은 %d, %c 입니다.\n", a, b);


	return 0;
}