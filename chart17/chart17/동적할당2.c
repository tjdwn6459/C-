#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//������ �ް� ���� ����
int main(void)
{
	int num;
	int* p;
	int sum = 0;
	printf("��� ������ �����Ͻðڽ��ϱ� ?  ");
	scanf("%d", &num); // ������ ������ �Է� ����

	//������ ������ŭ ������� Ȯ��(�����Ҵ�)
	p = (int*)malloc(sizeof(int) * num);
	//1) malloc�� ��ȯ���� void�� ����ȯ
	//2) �޸��� ������ ũ�⸦ ��� 
	//3) ������ ������ŭ �޸𸮸� �Ҵ�

	if (p == NULL)
	{
		printf("error");
		exit(1); //������ ���� exit(n) 0�� �ƴ� ����� ������ ����
	}

	//���� ����������ٰ� ���� ������ �ּҰ��� ����
	for (int i = 0; i < num; i++)
	{
		printf("���� �Է� :  ");
		scanf("%d", &p[i]);
	}

	//�ּҰ��� �����Ͱ� ����Ű�� ���� ���� ���
	for (int i = 0; i < num; i++)
	{
		printf("%d��° ������ ���� : %d\n", i + 1, p[i]);
	}

	//�ش� �迭�� ���� ���鼭 ��� ���� ���� ����Ѵ�
	for (int i = 0; i < num; i++)
	{
		sum += p[i];
	}

	printf("���հ�� : %d", sum);
	

	return 0;
}