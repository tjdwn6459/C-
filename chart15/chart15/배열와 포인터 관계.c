#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	printf("%p %p\n", &a, pa);
	printf("===============================\n");
	int ary1[2] = { 1, 2 };
	char* pary1 = ary1;
	printf("%p %p\n", ary1, pary1);
	printf("%p %p\n", ary1 + 1, pary1 + 1);
	printf("==============================\n");
	int ary3[][2] = { {1, 2}, {3, 4} };
	int(*pary3)[2] = ary3;
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n", ary3 + 1, pary3 + 1);
	printf("================================\n");
	char* ary4[2] = { "hi", "good" };
	char* pary4 = ary4;
	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n", ary4 + 1, pary4 + 1);


	return 0;
}