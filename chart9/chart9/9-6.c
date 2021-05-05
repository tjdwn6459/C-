#include<stdio.h>

int main(void)
{
	int a = 10; //a변수 초기화
	int *p = &a; // 포인터 선언과 동시에 a 가리키도록 초기화(P)에 저장된값을 int형 변수의주소로 생각
	double *pd; //double형 변수를 가리키는 포인터

	pd = p; //(포인터) p를 pd에 대입 p는 4바이트고 pd는 8바이트라 공간이 남아서 결과 값이 나오게 된다 
	printf("%lf\n", *pd); 




	return 0;
}