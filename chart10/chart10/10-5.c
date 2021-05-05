#include <stdio.h>

void print_ary(int* pa);

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary); //배열명을 주고 함수를 호출


	return 0;
}

void print_ary(int* pa) // 함수에서 받을땐 포인터로 받음 주소를 복사해서 
{
	int i;
	for (i = 0; i < 5; i++)//반복문 돌며 출력
	{
		printf("%d", pa[i]); 
	}

}