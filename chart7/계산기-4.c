#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int s, h;//���������� �ȿ����� ���
	char ch;
	//�ݺ��� ����
	while(1) {
		printf("���⸦ �����Ͻðڽ��ϱ� O,X ?");
		scanf(" %c", &ch);

		if (ch == 'X')
		{
			printf("����");
			exit(0);
		}
		else
		{
			printf("���\n");
		}

		printf("�� ���ڸ� �Է��ϼ���. : "); //2���� ���ڸ� ���� ����
		scanf("%d %d", &s, &h);

		printf("�����ȣ�� �Է��ϼ��� : ");//�Ѱ��� ���� ���� ����
		scanf(" %c", &ch);

		//�����ȣ�� �ش簪 ���
		if (ch == '+')
		{
			printf("��Ģ������ ��� : %d\n ", add(s, h));  //add(s, h)�� �ؿ� �Լ�ȣ��
		}
		else if (ch == '-')
		{
			printf("��Ģ������ ���: %d\n ", sub(s, h));
		}
		else if (ch == '*')
		{
			printf("��Ģ������ ��� : %d\n", mul(s, h));
		}
		else if (ch == '/')
		{
			printf("��Ģ������ ��� : %d\n", div(s, h));
		}
	}
	return 0;
}

int add(int a, int b) //s=2,h=2�̸�  ���� int(a =2) int(b=2)
{
	int result; //result���� (��������)
	result = a + b; //���� �� ����
	return result; //���� �� ��ȯ�ؼ� int ���� add(s,h)�� ���� ��ȯ

	return a + b;

}

int sub(int a, int b)
{
	int result;
	result = a - b;
	return result;
}

int mul(int a, int b)
{
	int result;
	result = a * b;
	return result;
}

int div(int a, int b)
{
	int result;
	result = a / b;
	return result;
}


