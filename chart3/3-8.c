#include <stdio.h>

//const�� ����� ���� -> �������� �տ� const �� ���̸� �ʱ�ȭ �� ���� �ٲ� �� �ִ�
int main()
{

	int income = 0; //�ҵ�� �ʱ�ȭ 
	double tax; //���ݰ� ����� ���� ���� 
	const double tax_rate = 0.12;

	income = 456;//�ҵ�� ����
	tax = income * tax_rate; //���� ����ؼ� ���� ���ݰ��� ����
	printf("������ : %.1lf�Դϴ�. \n", tax);

	return 0;
}