#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include<string.h>

int main(void) {
	char ch;

	printf("�ҹ��� �Է� : ");
	scanf("%c", &ch);


	if ((ch >= 'a') && (ch <= 'z')) //�ҹ��� ����
	{
		printf("�빮�� : %c ", ch - 32); // a=97, A=65 �ҹ��ڿ��� �빮�ڷ� �ٲٷ��� 97-32=65 A�� ���� ���´�
	}

	else if ((ch >= 'A') && (ch <= 'Z')) //�빮�� ����
		
	{
		printf("�ҹ��� : %c ", ch + 32); //�빮�ڿ��� �ҹ��ڰ� �Ƿ��� ���̳��� ��ŭ �����ش� 
	}

	printf("�빮�� �Է� : ");
	scanf(" %c", &ch);


	if ((ch >= 'a') && (ch <= 'z')) //ch�� ���� ���� 
	{
		printf("�빮�� : %c ", ch - 32);
	}

	else if ((ch >= 'A') && (ch <= 'Z'))

	{
		printf("�ҹ��� : %c ", ch + 32);
	}


	return 0;
}