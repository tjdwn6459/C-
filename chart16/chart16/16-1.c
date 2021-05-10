#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //동적할당 연결할 포인터선언
	double* pd;

	pi = (int*)malloc(sizeof(int)); //1)malloc(sizeof(int) 저장공간의 크기를 측정해 할당 2) 반환되는 주소를 형변환 3) int형을 가리키는 포인터에 저장 
	if (pi == NULL) //pi의 값이 null이면
	{
		printf("#메모리가 부족합니다. \n");
		exit(1); //프로그램 강제 종료
	}

	pd = (double*)malloc(sizeof(double)); //함수 형변환 메모리 사이즈 측정

	*pi = 10; //주솟값을 직접적으로 바꿀순 없기에 포인터를 이용해 동적할당 영역을 사용
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi); 
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi); //동적할당 해제
	free(pd);//

	return 0;
}