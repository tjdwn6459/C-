#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> //���ڿ��� �ٷ�� ������� 

//char������ ���ڿ� ����
int main(void)
{
	char fruit[20] = "strawberry";//20���� �������� ������ ���ڿ��� ����

	printf("%s\n", fruit);//���ڿ� ���
	strcpy(fruit, "banana");//stcpy�� �Լ��� ����� ���ڿ��� fruit�� ����
	printf("%s\n", fruit);//������ ���ڿ��� ���

	return 0;



}