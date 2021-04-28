#include<stdio.h>
int main()
{
	int a = 10, b = 20, res;

	a + b; /*그다음 명령을 실행해야 되서 임시저장된 값이 날라갈 수도 있다 (순서)레지스터에서 대입연산자 만나서 메모리에 저장*/
	printf("%d + %d = %d\n", a, b, a + b);

	res = a + b; /*변수에 (res 메모리)저장시켜 출력*/
	printf("%d + %d = %d\n", a, b, res);



	return 0;
}