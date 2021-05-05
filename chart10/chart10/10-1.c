#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10; //시작주소 
	*(ary + 1) = *(ary + 0) + 10; // 2번째 방안에 *(ary + 1) 넣을 수는 20

	printf("세 번째 배열 요소에 키보드 입력: ");
	scanf("%d", ary + 2); //3번째 방 입력할 변수 

	for (i = 0; i < 3; i++) //배열에서는 for문
	{

		printf("%5d", *(ary + i)); //5칸안에 각배열 요소의 주소를 찾아 *(ary + 1)간접참조 연산으로 모든 배열의 요소ary[1] 값 출력
	}





	return 0; //프로그램 종료
}