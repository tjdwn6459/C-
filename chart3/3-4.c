#include <stdio.h>

//unsigned�� �߸� ����� ���
int main()
{
	unsigned int a;//unsigned�� ����� �����ϰ� %u�� ���

	a = 4294967295; //���� a �� ��� ����
	printf("%d\n", a); //�������·� ����ϴ� ���� ���� ���´� 
	a = -1;//a�� ���� ����
	printf("%u\n", a); //%u�� ����� ���·� ���

	return 0;
}