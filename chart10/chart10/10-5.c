#include <stdio.h>

void print_ary(int* pa);

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary); //�迭���� �ְ� �Լ��� ȣ��


	return 0;
}

void print_ary(int* pa) // �Լ����� ������ �����ͷ� ���� �ּҸ� �����ؼ� 
{
	int i;
	for (i = 0; i < 5; i++)//�ݺ��� ���� ���
	{
		printf("%d", pa[i]); 
	}

}