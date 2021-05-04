#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int s, h; //제어변수 s,h선언

	printf("몇단을 출력 할까요 : "); 
	scanf("%d", &s); // 빈값이라 입력 받을값 scanf

	for (h = 1; h <= 9; h++) //s에 해당하는 값을 지정했으니 h값만 반복되게 설정
	{
		printf("%d * %d = %d\n", s, h, (s * h)); //값 출력
	}




	return 0;
}