#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80]; //�� ���ڿ��� �Է��� �迭
	char* resp; // ���ڿ��� �� �迭�� ������ ������

	printf("2���� ���� �̸� �Է� : "); 
	scanf("%s%s", str1, str2);   //2���� ���ڿ��� �Է�
	if (strlen(str1) > strlen(str2)) //�迭�� �Էµ� ���ڿ��� ��
		resp = str1; //str1�� �� ���� ���ڿ��� �Է� �޴´� 

	else
		resp = str2; //str2���ڿ��� resp�����Ͱ� ����Ű�� ���� ������ ���
	printf("�̸��� �� ������ : %s\n", resp);

	return 0;





}