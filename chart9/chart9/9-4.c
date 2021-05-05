#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;  //변수 초기화 
	const int* pa = &a; // const(상수화) 다른 주소를 지정 할 수 없다 포인터 pa는 변수 a를 가리킨다

	printf("변수 a 값: %d\n", *pa); //간접 참조해 a값 출력
	pa = &b; //pa가 변수b를 가리키며 간접 참조 한다 
	printf("변수 b 값 : %d\n", *pa);
	pa = &a; //다시 포인터pa가 변수 a를 가리킨다
	a = 20; // 포인터를 상수화 시켰기에 값을 바꿀수 없기에 a를 직접 참조하여 출력 한다.
	printf("변수 a 값 : %d\n", *pa);
		



	return 0; //프로그램 종료
}