#include <stdio.h>

int sum(int, int);


int main(void)
{
	int (*fp)(int, int); //�Լ��̸��� �����ͷ�
	int res;


	fp = sum;//�Լ�Ÿ����  �Է°� ����� ���ƾ��Ѵ� 
	res = fp(10, 20); //res��
	printf("result : %d\n", res);


	return 0;

}

int sum(int a, int b)
{
	return (a + b);
}