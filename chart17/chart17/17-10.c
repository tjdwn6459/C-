#include <stdio.h>

//����ü�� ����� �й��� ���� ������ ó��

union student //����ü ����
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



	union student s1 = { 3.14 }; //����ü ���� ����
	STUDENT s2;
	enum season s3;
	struct student1 s2;
	printf("�й� : %d\n", s1.num);
	s1.grade = 315;
	printf("���� : %1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num);


	return 0;




}