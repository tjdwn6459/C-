#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcpy �Լ��� ����ϱ� ����

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2; //����Ʈ 2���� str2���ڿ� �ִ�

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2); /*str2���ִ� ���ڿ�(����)��  str2�� ����*/
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana"); //���� ����Ʈ �迭 ��� �� �� �ִ�
	printf("�ٲ� ���ڿ� : %s\n", str1);

	return 0;
}