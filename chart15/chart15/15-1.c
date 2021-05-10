#include <stdio.h>

int main(void)
{

	int a = 10; //int형 변수 선언
	int* pi;//단일포인터 pi 
	int **ppi; //이중포인트 ppi

	pi = &a;//pi에 a의 주솟값 저장
	ppi = &pi;//이중포인트는 포인트 변수의 주소값을 저장

	printf("----------------------------------\n");
	printf("변수  변숫값  &연산  *연산  **연산\n");
	printf("----------------------------------\n");
	printf(" a%10d%10u\n", a, &a); //a의 값 10 a의 주솟값
	printf("pi%10u%10u%10d\n", pi, &pi, *pi); // pi=&a, pi의 주솟값, pi가 가진 주솟값이 가리키는 데이터의 값
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);//ppi = &pi,ppi의 주솟값, ppi가 pi의 주솟값을 저장하고 있으니 pi의 데이터값 ,ppi -> pi-> a->10
	printf("--------------------------------------------\n");


	return 0;



}