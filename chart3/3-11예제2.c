#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	char b;

	printf("�����ϳ��� �Է��ϼ��� : $ "); /*���ڸ� �ް� ������ ������ ������ ����� ����*/
	scanf("%d", &a);
	getchar(); //�����ϳ��� �Է¹����� ����� ��ȯ�Ѵ� 
	printf("�����ϳ��� �Է��ϼ��� : $ ");
	scanf("%c", &b);
	printf("�Էµ� ���� %d, %c �Դϴ�.\n", a, b);


	return 0;
}