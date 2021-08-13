#include <stdio.h>

int main()
{


	int ch; //입력하는 문자를 저장할 변수 

	ch = getchar(); // 함수가 반환하는 문자를 저장
	printf("입력한 문자 : "); //문자 입력 함수
	putchar(ch); //ch에 담긴 (입력한 문자 )출력
	putchar('\n');


	return 0;
}