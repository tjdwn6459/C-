#include <stdio.h>
int main() //int 형의 값을 출력한다
{
	int a; //int 형 변수 a선언
	int b, c;
	double da;//double형 변수 선언
	char ch; //char형 변수 선언

	a = 10; //변수 a에 값 저장
	b = a; //변수 b에 a값 저장
	c = a + 20; //변수 a +20 의 값 저장
	da = 3.5; //3.5값 da에 저장
	ch = 'A'; // ch에 문자 A 저장('')-> 문자열 저장 방식

	printf("변수 a 의 값 : %d\n", a);
	printf("변수 b 의 값 : %d\n", b);
	printf("변수 c 의 값 : %d\n", c);
	printf("변수 da 의 값 : %.1lf\n", da);
	printf("변수 ch 의 값 : %c\n", ch);

	printf("char 크기: %d\n", sizeof(char));//sizeof는 함수가 아니라 연산자
	printf("int 크기 : %d\n", sizeof(int));
	printf("double 크기 : %d\n", sizeof(double));
	
	return 0;//프로그램 종료\
}