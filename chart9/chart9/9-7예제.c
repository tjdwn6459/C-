#include <stdio.h>
//���� �ٲ�
void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;
	int temp;
	printf("�ٲٱ��� a, b : %d, %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("�ٳ� �� a, b: %d, %d\n ", a, b);



	return 0;
}