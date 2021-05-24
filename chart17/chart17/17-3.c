//다른구조체를 멤버로 갖는 구조체
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct  profile //구조체 선언
{
	int age; //구조체 멤버 선언
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;


};
int main(void)
{
	struct  student yuni; //yuni라는 객체 선언

	yuni.pf.age = 17; //멤버에 접근시 멤버 연산자 . 사용
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;


	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);;
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);

	return 0;
}