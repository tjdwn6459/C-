#include <stdio.h>

int main()
{
	char small, cap = 'G'; //char형 변수 선언 초기화

	if ((cap >= 'A') && (cap <= 'Z')) //대문자 범위라면

	{
		small = cap + ('a' - 'A'); //대소문자 차이를 더해서 소문자로 변환
	}

	printf("대문자 : %c %c", cap ,'\n'); //'\n'을 %c로 출력하면 줄 바뀜
	printf("소문자 : %c", small);


	return 0;
}