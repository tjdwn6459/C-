#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i ,sum= 0;
	

	pi = (int*)malloc(5 * sizeof(int)); //int�� ������� 5���� �Ҵ� ����
	if (pi == NULL)
	{

		printf("�޸𸮰� �����մϴ�\n"); //�Ҵ��� �� ����
		exit(1);//error�� ���� ��������
	}

	printf("�ټ� ���� ���̸� �Է��ϼ���.");
	for (i = 0; i < 5; i++)
	{

		scanf("%d", &pi[i]); //�迭 ��ҿ� �Է�
		sum += pi[i]; //���� ����ְ� �������� ���� ����Ҷ��� �ʱ�ȭ ��������Ѵ�(������ ���� �� ���� ����)
	}

	printf(" �ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);

	

	return 0;
}