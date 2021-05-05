#include <stdio.h>

int main(void)
{
	int ary[3];
	int* pa = ary; //포인트 변수 pa가 배열 ary를 가리킨다
	int i;

	*pa = 10; //포인트 변수 pa가 가리키는 곳에 10 데이터 값저장(첫번째 방)
	*(pa + 1) = 20; //*(pa + 1) 두번째방 이 가리키는 곳에 20
	pa[2] = pa[0] + pa[1]; //3번째 방 

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);// 포인터로 for문 돌려 모든 배열 요소 출력
	}




	return 0;
}