//�����Ҵ� //
//void *malloc(size_t size)��ŭ�� ũ�⸸ŭ �޸𸮸� �Ҵ��ϰ� �����ϸ� 
//�Ҵ��Ѹ޸��� ù��° �ּҸ��� �����ϸ� null����


//����� ������ �迭 ����
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[4] = {1,2,3,4 }; //ũ�Ⱑ 4�� �迭 ���� 
	int* pArr; //int���� ����Ű�� vhdlsxj pArr


	pArr = (int*)malloc(sizeof(int) * 4);
	//pArr�̶�� �����͸� ���ؼ� ��������� Ȯ�� 
	// 1)malloc�� ������ ��ȯ���� void�� (int *)�� ����ȯ
	//2)�����Ͱ�����Ű�� ��������� ũ�⸦  �˱����� �ڷ��� Ÿ���� ����Ʈ�� ����
	//3) arr[4]�� ���� ũ���� �Ȱ��� �޸𸮸� �Ҵ��ϱ� ���� ���ϱ� 4�� �Ѵ� (����)

	if (pArr == NULL)
	{
		printf("error");
	}
	for (int i = 0; i < 4; i++)
	{
		pArr[i] = arr[i];
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", pArr[i]);
	}

	free(pArr);
	//�Ҵ��Ѹ޸� ���� �ȱ׷��� �޸� ���� �߻�


	return 0;
}