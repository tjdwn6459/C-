#include <stdio.h>
int main() //int ���� ���� ����Ѵ�
{
	int a; //int �� ���� a����
	int b, c;
	double da;//double�� ���� ����
	char ch; //char�� ���� ����

	a = 10; //���� a�� �� ����
	b = a; //���� b�� a�� ����
	c = a + 20; //���� a +20 �� �� ����
	da = 3.5; //3.5�� da�� ����
	ch = 'A'; // ch�� ���� A ����('')-> ���ڿ� ���� ���

	printf("���� a �� �� : %d\n", a);
	printf("���� b �� �� : %d\n", b);
	printf("���� c �� �� : %d\n", c);
	printf("���� da �� �� : %.1lf\n", da);
	printf("���� ch �� �� : %c\n", ch);

	printf("char ũ��: %d\n", sizeof(char));//sizeof�� �Լ��� �ƴ϶� ������
	printf("int ũ�� : %d\n", sizeof(int));
	printf("double ũ�� : %d\n", sizeof(double));
	
	return 0;//���α׷� ����\
}