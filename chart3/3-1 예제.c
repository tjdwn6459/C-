#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];
	char add[50];
	int age;


	printf("이름 입력 : ");
	scanf("%s", name);
	printf("주소 입력 : ");
	scanf("%s", add);
	printf("나이 입력 : ");
	scanf("%d", &age);
	printf("%s의 주소는 %s이고 나이는 %d 입니다.", name, add, age);

	return 0;
}