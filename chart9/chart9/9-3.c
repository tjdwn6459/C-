#include<stdio.h>

int main(void)
{
	int a = 10, b = 15, total; //변수 선언과 초기화
	double avg; //평균을 저장할 변수
	int *pa, *pb;//포인터 선언
	int *pt = &total; //포인터 선언과 초기화
   double *pg = &avg; //dounle포인터 선언과 초기화

   pa = &a; //포인터pa에 변수 a 주소값 대입
   pb = &b; //포인터pb에 변수 b 주소값 대입

   *pt = *pa + *pb; //a와 b값을 더해 total에 저장
   *pg = *pt / 2.0; // total에 저장된 값을 2로 나누어 avg에 저장

   printf("두 정수 의 값 : %d, %d\n", *pa, *pb);
   printf("두 정수의 합 : %d\n", *pt);
   printf("두 정수의 평균 : %.1lf\n", *pg);

   //1)변수 선언 2) 포인터 선언 3) 포인터에 변수의 주소값 대입 4) 더한 값을 포인터에 저장 5)출력



	return 0;
}