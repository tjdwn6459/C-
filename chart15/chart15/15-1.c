#include <stdio.h>

int main(void)
{

	int a = 10;
	int* pi;
	int **ppi; //��������Ʈ

	pi = &a;
	ppi = &pi;//��������Ʈ�� ����Ʈ ������ �ּҰ��� ����

	printf("----------------------------------\n");
	printf("����  ������  &����  *����  **����\n");
	printf("----------------------------------\n");
	printf(" a%10d%10u\n", a, &a);
	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("--------------------------------------------\n");;


	return 0;



}