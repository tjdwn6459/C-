#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_num(void); //�Լ�����

int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);




	return 0; //����� �Ͼ���� �������� return �־���Ѵ�
}
int get_num(void)
{
	int num;

	printf("����Է� : ");
	scanf("%d", &num); //������ �Է� ���� �׷� ������ �Լ� "get_num"

	return num;//int num���� ��°��� ���ش� 
}