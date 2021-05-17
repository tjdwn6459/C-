#include <stdio.h>

//const를 사용한 변수 -> 변수선언 앞에 const 를 붙이면 초기화 된 값을 바꿀 수 있다
int main()
{

	int income = 0; //소득액 초기화 
	double tax; //세금값 계산을 받을 변수 
	const double tax_rate = 0.12;

	income = 456;//소득액 저장
	tax = income * tax_rate; //세금 계산해서 값을 세금값에 저장
	printf("세금은 : %.1lf입니다. \n", tax);

	return 0;
}