#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, grade;

	/*�����Է� �� ���� �Է�*/
	printf("�й� �Է� : ");
	scanf("%d", &num);

	
	getchar();	// ���ۿ� �����ִ� ���๮�� ����

	printf("���� �Է� : ");
	grade = getchar(); //�Էµ� ���� ����


	/*
	* ���� �Է� �� ���� �Է�
	printf("���� �Է� : ");
	grade = getchar();
	// ���๮�� ���� �ʿ� ����
	printf("�й� �Է� : ");
	scanf("%d", &num);
	*/

	printf("�й� : %d, ���� : %c", num, grade); //�Է� ���� ������ �ּڰ��� ���� �� ���

	return 0;
}