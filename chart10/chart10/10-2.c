#include <stdio.h>

int main(void)
{
	int ary[3];
	int* pa = ary; //����Ʈ ���� pa�� �迭 ary�� ����Ų��
	int i;

	*pa = 10; //����Ʈ ���� pa�� ����Ű�� ���� 10 ������ ������(ù��° ��)
	*(pa + 1) = 20; //*(pa + 1) �ι�°�� �� ����Ű�� ���� 20
	pa[2] = pa[0] + pa[1]; //3��° �� 

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);// �����ͷ� for�� ���� ��� �迭 ��� ���
	}




	return 0;
}