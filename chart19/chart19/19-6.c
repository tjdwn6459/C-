#include <stdio.h>
#define VER 7 //버전을 7로 치환
#define BIT16

int main(void)
{
	int max;

#if VER >= 6
	printf("버전 %d입니다.\n", VER);
#endif //if문이 끝남

#ifndef BIT16 //BIT16을 발견하면 
	max = 32767;// 이값을 출력하고
#else
	max = 2147483647;//아니면 이값을 실행해라
#endif //조건문 끝내기

	printf("int형 변수의 최댓값 : %d\n", max);

	return 0;

}