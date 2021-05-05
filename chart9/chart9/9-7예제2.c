#include <stdio.h>
void swap( );

int a = 10, b = 20; //전역변수 main 과 swap에서 다 건드릴수 있다 (선언을 밖에서 해서)
int main(void)
{

	/*int a = 10, b = 20;*/
	int temp;
	printf("바꾸기전 함수 a, b : %d, %d", a, b);
	//함수 선언
	//바꾸기 전 함수 출력

	swap();a	
	printf(" 바낀 후 a, b: %d, %d", a, b);


	return 0;
}

void swap()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}