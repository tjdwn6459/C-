#include <stdio.h>

struct student //예약어 struct 구조체이름student
{

	int num;
	double grade; //구조체는 멤버로써 변수만 가질 수 있다

};

int main(void)
{
	struct student s1; //구조체 student라는 객체 's1'선언

	s1.num = 2; //멤버접근 연산자 . 해서 2를 집어넣다
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num); //s1이라는 구조체에있는 num에 접근해 출력
	printf("학점 : %.1lf\n", s1.grade);  

	return 0; //프로그램 종료

}

// 예약어 구조체 설계
//구조체의 변수를 선언
//멤버접근연산자를 통해 값을 넣다
//구조체의 멤버에 접근해 값을 출력 