#include<stdio.h>


//포인터의 사용 * 주솟값은 방대한 메모리에서 해당 변수가 저장되어있는 위치를 알려준다 포인터 변수는 저장된 주솟값을 통해 해당 변수에 접근 가능
int main(void)
{
	int a; // a변수 선언
	int* pa; //포인터 선언

	pa = &a; //포인터에 a주소 대입
	*pa = 10; //포인터로 변수 a에 10 대입

	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a 값 출력 : %d\n", a);



	return 0;
}