#include <stdio.h>

void my_gets(char* str, int size);

int main()
{
	char str[7]; //���ڿ��� ������ �迭

	my_gets(str, sizeof(str)); //���� ���ڿ��� �Է��ϴ� �Լ� 
	printf("�Է��� ���ڿ� : %s\n", str);


	return 0;
}


void my_gets(char* str, int size)
{

	int ch;  //getchar�Լ� ��ȯ������ ����
	int i = 0;

	ch = getchar();   //ù��° ����

	while ((ch != '\n') && (i < size -1)) //������ �����ʴ´� 
	{
		str[i] = ch; //�Է��� ���ڸ� �迭�� ����
		i++;
		ch = getchar(); //������ ���� ���� �Է�
	}
	str[i] = '\0'; // '\0'�� ���ڿ��̶� �׷��� ������ �����Ⱚ�� ����)
}