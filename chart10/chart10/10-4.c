#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pa = ary; //0������ �ּ�
	int *pb = pa + 3; //3������ �ּ�


	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++; //1�������Ѽ�pa�� 1���� pb�� 3����
	printf("pb - pa : %u\n", pb - pa); //3-1

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb) printf("%d\n", *pa); //pa < pb�� true�ϱ� *pa ��� 
	else printf("%d\n", *pb);



	return 0;//���α׷� ���� 
}