#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct vision //vision구조체 선언
{
	double left;//double형의 멤버 변수 선언
	double right;
};
struct vision exchange(struct vision robot); // 출력 : 구조체 타입의 vision 두 시력을 바꾸는 함수

int main(void)
{
	struct vision robot;//vision구조체 타입의 robot변수 선언

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); //주소값을 주고 있다 
	robot = exchange(robot); //robot이라는 구조체 변수를 전달 (exchange)함수 호출
	printf("바뀐 시력 : %.1lf  %.1lf\n", robot.left, robot.right);

	return 0;

}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;//좌우 시력 교환
	robot.left = robot.right;
	robot.right = temp;

	return robot; //robot이라는 구조체 변수 return(구조체 안에 있는 멤버들도 리턴 가능)
};