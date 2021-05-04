#include<stdio.h>

void add_ten(int a);  //함수선언

int main(void)
{
	int a = 10;

	add_ten(a);  //a값을 복사하여 전달
	printf("a : %d\n", a);

	return 0;

}

void add_ten(int a)
{
	a = a + 10;
}