#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //�����Ҵ� ������ �����ͼ���
	double* pd;

	pi = (int*)malloc(sizeof(int)); //1)malloc(sizeof(int) ��������� ũ�⸦ ������ �Ҵ� 2) ��ȯ�Ǵ� �ּҸ� ����ȯ 3) int���� ����Ű�� �����Ϳ� ���� 
	if (pi == NULL) //pi�� ���� null�̸�
	{
		printf("#�޸𸮰� �����մϴ�. \n");
		exit(1); //���α׷� ���� ����
	}

	pd = (double*)malloc(sizeof(double)); //�Լ� ����ȯ �޸� ������ ����

	*pi = 10; //�ּڰ��� ���������� �ٲܼ� ���⿡ �����͸� �̿��� �����Ҵ� ������ ���
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi); 
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi); //�����Ҵ� ����
	free(pd);//

	return 0;
}