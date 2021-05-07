#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score yuni = { 90, 80, 70 };//구조체 변수 선언과 초기화
	struct score* ps = &yuni; //포인터에 yuni의 주솟값을 저장


	printf("국어 : %d\n", (*ps).kor);//데이터를 건들이기 위해 ps저장한 주솟값 건들여 멤버를 확인
	printf("영어 : %d\n", ps -> eng);// "->" 연산자 구조체 포인트를 통해 멤버에 접근하려면 사용
	printf("수학 : %d\n", ps ->math);

	return 0;



}