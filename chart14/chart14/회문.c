#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char str1[10];// ���ڿ� �迭ĭ
	int length; //���ڿ� ����

	printf("���ڿ��� �Է��ϼ��� : "); //�Է� �޴� ĭ
	scanf("%s", str1);

	length = strlen(str1); //���ڸ� �Է� �޾��� ���� ���̸� length�� ����


	for (int i = 0; i < length / 2; i++) // length 6, i =0�϶� (�ݺ��ؼ� ���� ��)
	{
		if (str1[i] != str1[length - 1 - i]) //str1[0]��° �� str[5]��° �� �Ѵ� (�񱳰�)
		{
			printf("ȸ���� �ƴմϴ�."); // �ΰ��� ���������� "ȸ���� �ƴմϴ�" ���
			exit(0); //if �� Ż��
		}
		
	}
	
	
		printf("ȸ���Դϴ�"); //������ for�� ���� "ȸ���Դϴ�"���
		
	

	return 0;//���α׷� ����
}

//���ڿ��� �Է� �޴�

// ���ڿ��� ������ 
// ���� ��ġ�� �ִ� ���ڸ� ��-> ���� ������ ->ȸ���Դϴ� ���
