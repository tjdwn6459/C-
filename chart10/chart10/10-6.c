#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 }; //�迭��� 5��(����)
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };//�迭��� 7��(����)

	print_ary(ary1, 5); //ary1 �迭 ��� , �迭����� ����(5)���� 
	printf("\n");//����
	print_ary(ary2, 7);//ary2 �迭 ���, ��������� ���� (7)����

	return 0;//���α׷� ����
}

void print_ary(int* pa, int size) //�迭�̸��� �������ֱ⶧���� ����Ʈ�� ����Ѵ� 
{
	int i;

	for (i = 0; i < size; i++) //�Է¹��� ������for�� �����Ѵ�
	{
		printf("%d", pa[i]); //�� ���
	}


}