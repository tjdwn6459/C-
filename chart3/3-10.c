#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//scanf�� ����� ���� �Է�
int main()
{
	int age; //���̴� ������
	double height; //Ű�� �Ǽ����� ����

	printf("���̿� Ű�� �Է��ϼ��� : "); 
	scanf_s("%d%lf", &age, &height); //�Է��ϴ� ���� �ּڰ� ����
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height); //�ش纯���� �ּڰ��� ã�� ���� ���
	return 0;
}