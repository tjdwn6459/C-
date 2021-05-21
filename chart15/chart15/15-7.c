#include <stdio.h>

int sum(int, int);


int main(void)
{
	int (*fp)(int, int); //함수이름을 포인터로
	int res;


	fp = sum;//함수타입은  입력과 출력이 같아야한다 
	res = fp(10, 20); //res에
	printf("result : %d\n", res);


	return 0;

}

int sum(int a, int b)
{
	return (a + b);
}