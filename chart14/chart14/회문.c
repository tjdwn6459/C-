#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char str1[10];
	int length; //���ڿ� ����

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str1);

	length = strlen(str1);


	for (int i = 0; i < length / 2; i++)
	{
		if (str1[i] != str1[length - 1 - i])
		{
			printf("ȸ���� �ƴմϴ�.");
			exit(0);
		}
		
	}
	
	
		printf("ȸ���Դϴ�");
		
	

	return 0;
}

//���ڿ��� �Է� �޴�

// ���ڿ��� ������ 
// ���� ��ġ�� �ִ� ���ڸ� ��-> ���� ������ ->ȸ���Դϴ� ���
