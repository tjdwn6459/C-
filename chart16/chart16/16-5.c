#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void print_str(char** ps); //�Է��� ��������Ʈ 

int main(void)
{
	char temp[80]; //temp[80]�ӽ� �迭 ����
	char* str[21] = { 0 };//������ �迭 (����Ʈ 2��) / null����Ʈ�� �ʱ�ȭ ��Ŵ
	int i = 0;

	while (i < 20)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp); //�ӽ�������temp�Է��� �޴� (gets ���ڿ��� �������� �Է� �޴� �Լ�, ���Ⱑ ������)
		if (strcmp(temp, "end") == 0)break; //srtcmp ���ڿ� 2�� �� (temp�� "end"�� ������ �ݺ����� �������´�)
		str[i] = (char*)malloc(strlen(temp) + 1);//strlen ���ڿ� ���� �Լ� 
		strcpy(str[i], temp); //ù��° �濡 temp�� �ּڰ� ����(���ڿ��� ����)
		i++;
	}

	print_str(str); //2)�Լ�ȣ��, �ϳ��� �ҷ��� �ݺ��ϸ� �迭�� ä��⶧��

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]); //���پ� �޸� �Ҵ� ������ ���ְ� 
	}

	return 0;//���α׷� ���� 
}
	void print_str(char** ps) //3)����Ʈ�迭 �Է����� ����ҷ��� ��������Ʈ ����ؾ��Ѵ�
	{
		while ( *ps != NULL) //*PS������ ����� �Ѱ� �������Ͱ� �ƴϸ� �ݺ�
		{

			printf("%s\n", *ps);
			ps++;
		}
	}
