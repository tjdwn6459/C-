#include <stdio.h>

void print_char(char ch, int count); //�Է¹���

int main(void)
{


	print_char('@', 5); //������ ���ڰ� �ϴϱ� Ÿ���� ���� ����

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	//return; //return���� �� �������� �μ��� �ȽἭ ���� ���� 
	

}