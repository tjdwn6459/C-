#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //���ڿ� �����Լ� ��Ƴ��� ��� ����

int main(void)
{
	char str1[80] = "cat"; //���ڿ� �ʱ�ȭ
	char str2[80];

	strcpy(str1, "tiger"); //strcpy(str1, str2) ->�ι�° �μ��� ù��° ������ ����
	strcpy(str2, str1); //������ tiger����Ǿ����� �Ȱ��� str2�� ������ ����
	printf("%s, %s\n", str1, str2);



	return 0;
}