#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];
	char add[50];
	int age;


	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("�ּ� �Է� : ");
	scanf("%s", add);
	printf("���� �Է� : ");
	scanf("%d", &age);
	printf("%s�� �ּҴ� %s�̰� ���̴� %d �Դϴ�.", name, add, age);

	return 0;
}