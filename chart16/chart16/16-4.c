#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[80];//�ӽ� CHAR�迭 �˳��ϰ� ����
	char* str[3]; //�����Ҵ��� ������ ������ �迭
	int i;

	for (i = 0; i < 3; i++)
	{

		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp); 
		//���ڿ��� ����temp��� ������  ���ڿ��� �Է��ϰ� �ִ�
		str[i] = (char*)malloc(strlen(temp) + 1);//*str�����Ϳ� ����*
		strcpy(str[i], temp);//�����Ҵ翵���� ���ڿ��� ����
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]); //	�ҷ��ö� str[i]�� ����� �ּڰ��� �ش� �����͸� �ϳ��� �����͵� ��ü ���ڿ��� ������ �� �� �ִ�
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]); //�޸� �����Ҵ� ������ 3�� 
	}


	return  0;
}