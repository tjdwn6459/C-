#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���ڿ� ���ڿ��� �Է�
int main()
{

	char grade; //������ �Է��� ����
	char name[20];//�̸��� �Է��� �迭 (�迭�� ������ ���ڸ� �ֱ⿡ ���� ���� ����� �Ѵ�)

	printf("�����Է� : ");
	scanf("%c", &grade);//������ �ּڰ��� �Է�
	printf("�̸��Է� : ");
	scanf("%s", name);// name�迭�� �̸� ���ڿ��� �Է� 
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);//�ּڰ��� �ش� ���� ã�� ��� �Ѵ�

	return 0;
}