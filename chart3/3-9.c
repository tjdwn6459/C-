#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//scanf�� ����� Ű���� �Է� 
int main()
{
	int a; // int�� ���� a ����

	printf("�����ϳ��� �Է��ϼ��� : $");
	scanf_s("%d", &a); //&������ �ּҸ� ���ϴ� ������
	printf("�ԷµȰ� : %d\n", a);//a�� �ּڰ��� ã�� ��� 

	return 0;
}