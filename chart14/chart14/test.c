#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





int main(void)
{
	int person[5][4] = { 0 };
	int total, sub_total;
	double avg;
	int i, j;


	for (i = 0; i < 2; i++) //���߿� 5 
	{
		printf("4������ ���� �Է� :  ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &person[i][j]); // �л����� ������ �Է� �޴´�
		}
	}


	print_score();
	for (i = 0; i < 5; i++) //�л� �� ��ŭ �ݺ�
	{
		total = 0; //�δ� ����  �������� ���� �ʱ�ȭ
		printf("%d �� �л� : ", i + 1);
		for (j = 0; j < 4; j++) //����
		{
			printf("%d ", person[i][j]);
			
			total += person[i][j];//���� �ݺ��ϸ鼭 ���� ��������
			

		}
		avg = total / 4.0; //������ ���� ����ŭ ���� ����� ����
		printf("4������ ���� : %d, ��� : %.1lf \n", total, avg);
	}



	for (j = 0; j < 5; j++)
	{
		sub_total = 0;
		
			 //���� ���� �������� �ʱ�ȭ
			
		for (i = 0; i < 4; i++)
		{
			
			
			sub_total += person[i][j];
			
		}
		printf("�հ� : %5d", sub_total);
		avg = (double)sub_total / 5.0;
		printf("��� :  %.1f\n", avg);
	}


	return 0;
}

//5���� �л����� �� �� �� ü ����(���� 4��)�� �Է� �޴´�
//���л��� ������ �ݺ��ؼ� ����
//������ �ջ� //����� ���� // ���񺰷� ���� �ݺ��ؼ� ���Ѵ� 