#include <stdio.h>
//숫자 바꿈
void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;
	int temp;
	printf("바꾸기전 a, b : %d, %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("바낀 후 a, b: %d, %d\n ", a, b);



	return 0;
}