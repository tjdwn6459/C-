#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //�Ҵ� ���� ���� ������ ������ ����
	int size = 5; //�ѹ��� �Ҵ�� ����� ũ�⿡ int�� ���� 5�� ����
	int count = 0; 
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int)); //calloc�� �Լ��� ȣ���ϴ� �μ��� 2��(�迭��� 5���� int���� ��������� �ʿ�)
	
	//���� �ݺ�
	while (1)
	{
		printf("����� �Է��ϼ��� => ");
        scanf("%d", &num);//�����͸� ����ϱ⿡ �ش� ������ �ش��ϴ� �ּڰ��� ����
		if (num <= 0)break; 
		if (count == size) //���� ������ ��(���� ������ ������ '5'�� ���� �Ǹ� ������ �� Ȯ�����ش�)
		{
			size += 5; 
			pi = (int*)realloc(pi, size * sizeof(int));//������ �ִ��� pi //realloc�� ����ҷ��� �ӽ÷� �Ҵ� �޾ƾ��Ѵ�(�ּҸ� ��ȯ�ؼ� �����Ϳ� �����ؼ� ���) 

		}
		pi[count++] = num;

	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);//���� ���ǿ��� 
	}
	free(pi);// �޸� ��Ȱ�� ���� ��ȯ


	return 0;//���α׷� ����

}