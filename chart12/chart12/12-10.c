#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //strcat, strncat�Լ� ��� ��� ����

int main(void)
{
	char str[80] = "straw"; //straw�� ���ڿ��� �ʱ�ȭ

	strcat(str, "berry"); // str �迭��  berry ���̱�
	printf("%s\n", str);
	strncat(str, "piece", 3);//str�迭�� piece���� 3���� pie ���̱� 
	printf("%s\n", str);

	return 0;




}