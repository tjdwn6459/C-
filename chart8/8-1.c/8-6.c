#include <stdio.h>
#include <string.h>

//���ڿ� ���� ����� �Լ� :gets puts
int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);  //�߰��� �ǹ��ڸ� ����� �ϳ��� ���ڿ��� �迭�� ����
	puts("�Էµ� ���ڿ� : "); //���ڿ� ����� �ڵ����� �ٹٲ� 
	puts(str);//�迭�� ����� ���ڿ� ���




	return 0;
}