#include <stdio.h>

//��ȿ���� Ȯ��
int main()
{
	float ft = 1.234567890123456789;//��ȿ������ ������ �ʱ�ȭ
	double db = 1.234567890123456789;

	printf("float �� ������ ��: %.20f\n", ft);//�Ҽ��� 20�ڸ� ������ �� ���
	printf("double �� ������ ��: %.20lf\n", db);

	return 0;
}