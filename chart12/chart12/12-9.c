#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main(void)
{
	char str[20] = "mango tree"; //�迭��  mango tree�� �ʱ�ȭ

	strncpy(str, "apple-pie", 5); //5�� �ڸ��� ���ڿ��� ���� "apple"

	printf("%s\n", str); //������ �ִ� 5�� ���ڸ� ��ȯ�� �ȴ� ->apple tree

	return 0;



}