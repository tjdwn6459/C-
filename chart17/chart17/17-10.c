#include <stdio.h>

//공용체를 사용한 학번과 학점 데이터 처리

union student //공용체 선언
{
	int num;
	double grade;


};

struct student1
{
	int num;
	double grade;

};

enum season {
	SPRING, SUMMER, FALL = 100, WINTER
};

typedef struct student1 {
	int num;
	double grade;
} STUDENT;

int main(void)
{



	union student s1 = { 3.14 }; //공용체 변수 선언
	STUDENT s2;
	enum season s3;
	struct student1 s2;
	printf("학번 : %d\n", s1.num);
	s1.grade = 315;
	printf("학점 : %1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);


	return 0;




}