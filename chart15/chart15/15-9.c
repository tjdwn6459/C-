#include <stdio.h>

int main(void)
{
	int a = 10; //int 형 변수
	double b = 3.5; //double형 변수
	void* vp; //void 포인터

	vp = &a; //vp에 int형 a 주소 저장
	printf(" a : %d\n", *(int*)vp); //*vp에 해당하는 주솟값의 데이터

	vp = &b; //vp에 double형 b 주소 저장
	printf(" b : %.1lf\n", *(double*)vp); //*vp에 해당하는 주솟값의 데이터


	return 0;
}