//���ڿ� �����Ҵ�//
//1) ���ڿ��� �Է¹ޱ� ���� ����� ũ���� ���ڹ迭 ����
//2) �����Ҵ� ������ ������ ������ �迭 ����
//3) ���ڿ� �Է�
//4) ���ڿ� �������->main �� �Է°��� ���� ���·� ����ȯ->�����ϴ� ũ��� ���� �޸� �Ҵ� (null�� +1)
//5) �Է¹��� ���ڸ� �����Ҵ翵������ ���ڿ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

#include <string.h>

int main(void)
{
	char temp[50];
	char* str[3];
	int i;

	for (int i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);//gets�� ����� �Է��� �ް� ������ �ȴ�
		str[i] = (char*)malloc(strlen(temp) + 1); //str�����Ͱ� ����Ű�� ������ ������ش� 
		strcpy(str[i], temp);//�� �迭���� temp�� ���� ���� �Ѵ� 

	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);//�� �迭�� ���鼭 ���� ��µȴ�
	}




	return 0;
}