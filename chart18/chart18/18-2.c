#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");//a.txt������ ����� �׾ȿ� ���ڿ��� ������ ������ "r"->�б� ���ؼ� ������ ����
	if (fp == NULL) //Ư���Ѱ� ����Ű�°� ���� (�ǹ� ���� �ּ�)
	{
		printf("������ ������ �ʽ��ϴ�. \n");
			return 1;


	}

	while (1)
	{
		ch = fgetc(fp); //
		if (ch == EOF)//���� �߻� �Ǵ� ������ �����͸� ��� �о����� Ȯ��
		{
			break;
		}
		putchar(ch);
	}
	fclose(fp);

	return 0;

}