#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b ; // �Է¹��� ���ڸ� ����
	char ch; // �����ȣ�� ����
	int sum; // ����ؼ� ������ ����
	

	printf("�� ���� �Է��ϼ���. : ");  
	scanf("%d %d", &a, &b); // ���̶� �Է¹����� scanf
	

	printf("�����ȣ�� �Է��ϼ���. : ");
	scanf(" %c", &ch); //���� �Է¹��� �� ����scanf


	switch (ch) //ch�� ������ ������ �ش� ����(+,-,*,/)�߿� �����ϰ� break
	{
	case '+':
		sum = a + b; 
		break;

	case '-':
		sum = a - b;
		break;
	case '*':
		sum = a * b;
		break;
	case '/':
		sum = a / b;
		break;
	}

	printf("��Ģ������ ���� : %d", sum); //������ ������ �Ǿ� sum�� �Է¹��� ���� ����Ѵ� 
	
		
	

	return 0;
}