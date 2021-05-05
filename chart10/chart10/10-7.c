#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size); //���� ������ 5�� �迭�� ���� 
	printf("�迭�� �ִ� : %.1lf\n", max); //max�� �� ���


	return 0; //���α׷� ����
}

void input_ary(double* pa, int size)//double������ �迭�� �Է� �޴� 
{
	int i; //����� ����

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i); //n��° �濡 ��� �� ������ �ִ´� 
	}
}


double find_max(double* pa, int size)
{
	double max; //��������
	int i;//���� ���� ����

	max = pa[0]; //�迭 ù��° ������ ���� �ִ� ������ max�� ����־��
	for (i = 1; i < size; i++) // �ι�° �迭���� max�� ���Ѵ� 
	{
		if (pa[i] > max) max = pa[i];//ù��°�� ���� max�� ���߱⶧���� �������� ������ ���� �� ���� ũ�� max�� �ְ� for�� �����ϸ� �ִ� ã�´� 
	}

	return max;
}
