#include <stdio.h>

//���մ��� ������
int main()
{
	int a = 10, b = 20;
	int res = 2;

	a += 20; //�������� ���ڿ� a�� ����Ȱ��� ���ؼ� ���� 
	res *= b + 10; //������ ���꿡 ������ ���� ���ؼ� ����


	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);


	return 0;
}