#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile //profile ����ü ����
{
	char name[20]; //�̸����� �迭
	int age; //���� ���� �迭
	double height; //Ű
	char* intro;//�ڱ�Ұ��� ���� ������

};

int main(void)
{
	struct profile yuni;//����ü ��üyuni����

	strcpy(yuni.name, "������"); //name�̶�� ����ü�� ���ڿ��� ����
	yuni.age = 17; //yuni��� ������ age����� ������ ������ �ִ�
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80); //�ڱ�Ұ��� ������ ������ ���� �Ҵ� 
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);//������ �ڱ�Ұ��� �Է�

	printf("�̸� : %s\n", yuni.name); 
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	free(yuni.intro);//�����Ҵ� free�� ���ؼ� �޸� ������ ����

	return 0;



}